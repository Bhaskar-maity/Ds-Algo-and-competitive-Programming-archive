//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

class Solution{
public:
    bool equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0; i< N; i++){
            sum += arr[i];
        }

        //odd case
        if(sum %2 != 0)
            return false;
        //even case
        else {
            int hfsum= sum / 2;
            bool flag = Subset_Sum_Problem(arr,  hfsum, N);
            if(flag)
                return true;
            else 
                return false;
        }
    }

    bool Subset_Sum_Problem(int arr[], int sum, int n) 
    { 
        //tabulation matrix
        int t[n+1][sum+1];

        //initialization 
    for(int i=0; i< n+1; i++)
            t[i][0] = true;
        for(int j=1; j< sum+1; j++)
                t[0][j] = false;

        for(int i=1; i< n+1; i++){
            for(int j=1; j< sum+1; j++) {
                if(arr[i-1] <= j){
                    t[i][j] = ( t[i-1][j-arr[i-1]] || t[i-1][j]);
                }

                else 
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][sum];   
    }
};