//https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#

class Solution{

	public:
	int minCoins(int coins[], int m, int val) 
	{ 
        //m= no of coins, val= value
	    int t[m+1][val+1];

        for(int i=0; i<val+1; i++)
            t[0][i]=INT_MAX-1;

        for(int i=1; i<m+1; i++)
            t[i][0]=0;

        for(int i=1; i<m+1; i++){
            for(int j=1; j<val+1; j++){

                if(coins[i-1] <= j){
                    t[i][j]= min(t[i][j - coins[i-1]] + 1, t[i-1][j]);
                }
                else
                    t[i][j] = t[i-1][j];
            }
        }
        
        if (t[m][val] == INT_MAX - 1) return -1;
        return t[m][val];
	} 
	  
};