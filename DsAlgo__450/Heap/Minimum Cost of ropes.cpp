// using minheap(minimum element on top of heap)
// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

//logic = insr all element in minheap then pop a,b element and sum them to ans, then push the new rope length(a+b) to minheap

long long minCost(long long arr[], long long n) {
    long long ans=0;
    //minheap
    priority_queue <long long, vector<long long>, greater<long long> > mnhp(arr,arr+n);

    // for(long long i=0; i<n; i++) {
    //     mnhp.push(arr[i]);
    // }

    while(mnhp.size() != 1) {
        long long a= mnhp.top();
        mnhp.pop();
        long long b= mnhp.top();
        mnhp.pop();

        ans+=(a+b);

        mnhp.push(a + b);
    }

    return ans;
}