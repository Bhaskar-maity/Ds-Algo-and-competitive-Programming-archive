// recursive + memozization solutin
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

int dp[1001][1001];

int solutin(int w, int wt[], int val[], int n){
    if(w==0 ||n==0) return 0;

    if(dp[n-1][w] != -1)
        return dp[n-1][w];

    if(wt[n-1] <= w ){
        return dp[n-1][w] = max(val[n-1] + solutin(w-wt[n-1],wt, val, n-1),
        solutin(w, wt, val, n-1));
    }

    else if(wt[n-1] > w){
        return dp[n-1][w] = solutin(w, wt, val, n-1);
    }
}

int knapSack(int w, int wt[], int val[], int n) 
{ 
    // fill al dp array with -1
   memset(dp, -1, sizeof(dp));
   return solutin( w,  wt,  val,  n);
}


