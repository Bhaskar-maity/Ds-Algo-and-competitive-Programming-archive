// Time Complexity: O(N. log(N))
// Auxiliary Space: O(N)
//https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1#


// kth-smallest function return kthsmallest
long long kthsmallest(long long a[],long long n, long long k){
    priority_queue<long long> mxhp;

    for(long long i=0;i<n;i++){
        mxhp.push(a[i]);

        if(mxhp.size()>k){
            mxhp.pop();
        }
    }

    return mxhp.top();
}


long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
{
    long long ans=0;
    //k1th k2th
    long long first = kthsmallest(a,n,k1);
    long long second = kthsmallest(a,n,k2);

    //check
    for(long long i=0;i<n;i++){
        if(a[i]>first && a[i]<second)
            ans+=a[i];
    }

    return ans;
}