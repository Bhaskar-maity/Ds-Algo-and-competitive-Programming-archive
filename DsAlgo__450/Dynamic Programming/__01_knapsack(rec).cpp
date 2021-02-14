// recursive solutin
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

int knapSack(int w, int wt[], int val[], int n) 
{ 
   if(w==0 ||n==0) return 0;
   if(wt[n-1] <= w ){
       return max(val[n-1] + knapSack(w-wt[n-1],wt, val, n-1),
       knapSack(w, wt, val, n-1));
   }

   else if(wt[n-1] > w){
       return knapSack(w, wt, val, n-1);
   }
}

