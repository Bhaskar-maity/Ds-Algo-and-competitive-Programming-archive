//https://www.codechef.com/SPNT2021/problems/OPRSTACK

// You are given a stack of N integers. In one operation, you can either pop an element from the stack or push any popped element into the stack. You need to maximize the top element of the stack after performing exactly K operations. If the stack becomes empty after performing K operations and there is no other way for the stack to be non-empty, print -1.

//kth largest element
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main()
{
    FAST;
    ll n,k;
    cin>>n>>k;
    priority_queue<ll> mxhp;
    ll arr[n];
    
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        
        mxhp.push(arr[i]);
        
        if(mxhp.size()>k)
            mxhp.pop();
    }
    cout << mxhp.top();

    return 0;
}
