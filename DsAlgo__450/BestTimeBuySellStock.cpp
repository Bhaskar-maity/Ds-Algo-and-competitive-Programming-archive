class Solution {
public:
//optimal solution
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int pr = 0;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < min) 
                min = prices[i];
            if((prices[i] - min) > pr) 
                pr = prices[i] - min;
        }
        
        return pr;
    }
};