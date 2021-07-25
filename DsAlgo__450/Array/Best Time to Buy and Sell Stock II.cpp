// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/
// https://www.youtube.com/watch?v=Q7v239y-Tik
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times)
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.


// [7,1,5,3,6,4]
//if prev < next
// then add diff to profit
//  - - 4 - 3 -
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //two pointer i=prev, j=post
        int profit=0;
        int n=prices.size();

        for(int i=1; i<n; i++){
            //if prev < next
            // then add diff to profit
            if(prices[i-1] < prices[i]){
                profit+=prices[i]-prices[i-1];
            }
        }

        return profit;
    }
};

