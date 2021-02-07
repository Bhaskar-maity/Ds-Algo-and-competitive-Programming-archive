int minSwap(int *arr, int n, int k) {
    int count =0,nk = 0,ans = 0;
    for(int i=0;i<n;i++) {
        if(arr[i]<=k)
         count++;
        } 
    for(int i=0;i< count;i++) {
        if(arr[i]>k)
         nk++;
        ans = nk;
    }
    for(int i=0,j=count;j<n;i++,j++){ 
        if(arr[i]>k) nk--;
        if(arr[j]>k) nk++;
        ans = min(ans,nk);
    }
    return ans;
}