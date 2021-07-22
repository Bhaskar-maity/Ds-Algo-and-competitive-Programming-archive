// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//https://www.youtube.com/watch?v=34WE6kwq49U
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

//time - o(n), space - o(1), my own approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //two pointer i=prev, j=post
        int i=0,j=0,maxProfit=0;
        int n=prices.size();

        while(i<=j && j<n) {
            //if at any point ith element is greater than jth element, move i to j [prev > post ...it's stock,,,, example -> 7,1  ]
            if(prices[i]>prices[j]){
                i=j;
            }

            //max profit calculating
            maxProfit = max(maxProfit, prices[j]-prices[i]);
            //j++
            j++;
        }
        
        return maxProfit;

    }
};