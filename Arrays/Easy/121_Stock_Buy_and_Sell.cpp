/* You are given an array prices where prices[i] is the price of a given stock on the ith day.
   You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
   Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

/* Time Complexity  : O(n) 
   Space Complexity : O(1)
*/

/* Approach   : Optimal
   Difficulty : Easy
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size(), profit= 0, buy= prices[0];     // Variable decalaration

        // Traversing in the prices vector
        for(int i=1; i<n; i++){
            if(prices[i] < buy) buy= prices[i];     // Checking if the ith index element is smaller than buy
            else if(prices[i]-buy > profit) profit= prices[i]-buy;     // Checking if the ith index element minus buy is greater than profit
        }
        return profit;     // Returning the max profit
    }
};
