/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
   You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal
   Difficulty : Easy
*/

// Doing XOR operation with every element will remove duplicate numbers and return the single number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans= 0;      // Variable declaration

        // Traversing in nums vector
        for(int val: nums){
            ans= ans^val;     // Doing bitwise operation XOR with every element
        }
        
        return ans;     // Returing the final result
    }
};
