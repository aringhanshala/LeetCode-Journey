/* You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
   Find two lines that together with the x-axis form a container, such that the container contains the most water.
   Return the maximum amount of water a container can store.
   Notice: that you may not slant the container.
*/

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal (2 pointer)
   Difficulty : Medium
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater= 0;     // ans variable
        int lp= 0, rp= height.size() - 1;

        // Traversing in the array
        while(lp<rp){
            int w= rp - lp;     // Width of the container
            int ht= min(height[lp], height[rp]);     // Height of the container

            int currWater= w*ht;     // Current capacity of container
            maxWater= max(maxWater, currWater);     // Max capacity of container
            height[lp] < height[rp]? lp++ : rp--;     // Ternary operator
        }

        return maxWater;     // Returning the max water capacity
    }

};
