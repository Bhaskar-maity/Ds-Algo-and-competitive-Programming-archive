//using minheap (minimum element in top of heap)
//o(nlognk) //https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1#
//if minheap size is greater than k then we pop

vector<int> kLargest(int arr[], int n, int k) {
    //minheap
    priority_queue<int, vector<int>, greater<int> > mnhp;
    vector<int> v;

    for(int i=0;i<n;i++){
        mnhp.push(arr[i]);
        if(mnhp.size()>k){
            mnhp.pop();
        }
    }

    for(int i=0; i<k; i++){
        v.push_back(mnhp.top());
        mnhp.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}