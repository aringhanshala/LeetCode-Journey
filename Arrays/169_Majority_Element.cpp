/* The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists 
   in the array.
*/

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

// Approach: Moore's voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();     // Taking the size of vector
        int freq= 0, ans= 0, i;     // Variable declaration

        // Traversing in the vector
        for(i=0; i<n; i++){
            if(freq == 0) ans= nums[i];     // Result change to ith element

            if(ans == nums[i]) freq++;     // If same element is coming
            else freq--;     // If deferent element has arrived
        }

        return ans;     // Returning the majority element
    }
};
