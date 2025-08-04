/* You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. 
   The task is to find the repeating and missing numbers a and b.

   Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
*/

/* Time Complexity  : O(n^2) 
   Space Complexity : O(n^2)
*/

/* Approach   : Optimal (only approach)
   Difficulty : Easy
*/

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;     // Declaring ans vector
        unordered_set<int> s;     // Declaring an unordered set 
        int n= grid.size(), a, b, expSum= 0, actualSum= 0;     // Declaring variables

        // Traversing in the matrix
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                actualSum+= grid[i][j];     // Calculating the acutal sum of the elements

                // If an element is repeated in the set so save that element in variable 'a'
                if(s.find(grid[i][j]) != s.end()){    
                    a= grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);     // Otherwise insert element in set
            }
        }

        expSum= (n*n) * (n*n + 1)/2;     // Calculating the expected sum of the elements
        b= expSum + a - actualSum;     // Calculating the missing number
        ans.push_back(b);

        return ans;     // Returning the values of {a,b} 
    }
};
