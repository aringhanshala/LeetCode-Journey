// Given an integer array nums, find the subarray with the largest sum, and return its sum. 

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal (Kadane's algorithm)
   Difficulty : Medium
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();     // Size of array
        int current_sum=0, max_sum= INT_MIN;      // Variable declaration

        // Traversing in the array
        for(int i=0; i< n; i++){
            current_sum += nums[i];     // Adding current index element in current sum variable
            max_sum= max(current_sum, max_sum);     // Compaing and then storing the max number
            if(current_sum <0 ) current_sum= 0;     // Reseting current sum varible to 0 if its value goes below 0
        }

        return max_sum;     // Returning the anwser
    }
};
