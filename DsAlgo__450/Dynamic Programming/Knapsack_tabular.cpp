//tabulation approach of knapsack problem
// Time Complexity: O(N*W).
// Auxiliary Space: O(N*W)
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

// w= max weight for bag, wt= weights array of elements, val= values array of elements, n= no  of elements
int knapSack(int w, int wt[], int val[], int n) 
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
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }

            else 
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][w];   
}