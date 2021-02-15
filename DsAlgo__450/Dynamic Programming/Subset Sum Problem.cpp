//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

int Subset_Sum_Problem(int arr[], int sum, int n) 
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