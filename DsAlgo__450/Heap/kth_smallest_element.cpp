//using maxheap (maximum element in top of heap)
int kthSmallest(int arr[], int l, int r, int k) {
    //maxheap
    priority_queue<int> mxhp;
    for(int i=l;i<=r;i++){
        mxhp.push(arr[i]);
            if(mxhp.size()>k){
            mxhp.pop();
        }
    }
    return mxhp.top();
}