/* You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

   Merge nums1 and nums2 into a single array sorted in non-decreasing order.

   The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the 
   elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

/* Time Complexity  : O(m+n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal (only approach)
   Difficulty : Easy
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx= m+n-1, i= m-1, j= n-1;     //Variable declaration

        // Traversing in nums1 vector
        while(i >=0 && j>=0){
            if(nums1[i] >= nums2[j]) nums1[idx--] = nums1[i--];     // If last element of nums1 > last element of nums2 then store value of last element of nums1 in last of nums1
            else nums1[idx--]= nums2[j--];     // If last element of nums2 > last element of nums1 then store value of last element of nums2 in last of nums1
        }

        // Traversing in nums2 vector when all elements of vector nums1 is completed
        while(j>=0){
            nums1[idx--]= nums2[j--];      // store value of last element of nums2 in last of nums1
        }
    }
};
