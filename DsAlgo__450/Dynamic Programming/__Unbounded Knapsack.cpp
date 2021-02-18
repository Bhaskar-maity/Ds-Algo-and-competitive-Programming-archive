// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#
// w= max weight for bag, wt= weights array of elements, val= values array of elements, n= no  of elements
class Solution{
public:
    int unbounded_knapSack(int n, int w, int val[], int wt[])
    {
        //tabulation matrix
        int t[n+1][w+1];
    
        //initialization with 0, 
       for(int i=0; i< n+1; i++)
        for(int j=0; j< w+1; j++)
            if(i==0 || j==0)
                t[i][j] = 0;
    
        for(int i=1; i< n+1; i++){
            for(int j=1; j< w+1; j++) {
                if(wt[i-1] <= j){
                    t[i][j] = max(val[i-1] + t[i][j-wt[i-1]], t[i-1][j]);
                }
    
                else 
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][w]; 
        }
};
}