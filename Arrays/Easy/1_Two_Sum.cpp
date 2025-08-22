/* 1. Two Sum: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
   You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the 
   answer in any order.
*/

/* Time Complexity  : O(n^2) 
   Space Complexity : O(1)
*/

/* Approach   : Brute force
   Difficulty : Easy
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();     // Taking the size of vector
        
        // Traversing in the vector
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                // When ith index element + jth index element is equal to target then return i, j index
                if(nums[i] + nums[j] == target){  
                return {i,j};
                }
            }
        }
        return {};     // When sum of indexes is not equal to target then return null vector
    }
};
