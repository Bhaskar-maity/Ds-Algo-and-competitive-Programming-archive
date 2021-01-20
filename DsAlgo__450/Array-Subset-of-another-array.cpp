#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string check(ll arr[], ll brr[], ll n, ll m){
    if(m > n)
        return "No";
    unordered_map<ll, ll>mp;
    for(ll i=0; i<n; i++)   mp[arr[i]]++;
    
    for(ll i=0; i<m; i++){
        if(mp[brr[i]] == 0)
            return "No";
        mp[brr[i]]--;
    }
    return "Yes";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;    cin>>n>>m;
        ll arr[n], brr[m];
        for(ll i=0; i<n; i++)   cin>>arr[i];
        for(ll i=0; i<m; i++)   cin>>brr[i];
        
        cout<<check(arr, brr, n, m)<<"\n";

    }
    return 0;
}