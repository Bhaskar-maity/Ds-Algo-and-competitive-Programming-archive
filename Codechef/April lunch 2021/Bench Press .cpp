//https://www.youtube.com/watch?v=vjKt7sK0ctI
//https://www.codechef.com/problems/BENCHP

#include <iostream>
#include<bits/stdc++.h>
 
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define _ <<' '<<
#define mp make_pair
#define ALL(x) x.begin(), x.end()
#define LLA(x) x.rbegin(), x.rend()
#define PII pair < int , int >
#define PLL pair < ll , ll >
#define rep(i, a, n) for(int i = a ; i < n ; i++)
#define per(i, n, a) for(int i = n - 1 ; i >= a ; i--)
#define FOR(i, a, n) for(int i = a ; i <= n ; i++)
#define ROF(i, n, a) for(int i = n ; i >= a ; i--)
#define ins insert
#define CASE(POINTER) cout << "Case #" << POINTER << ": ";
#define readFile freopen("a.in", "r", stdin); freopen("a.out", "w", stdout);
#define debug(n) cout << #n << " = " << n << endl;

#define ll long long int
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define dif(a,b) (a>b?a-b:b-a)

using namespace std;


int main()
{
    FAST;
    ll t;
    cin>>t;
    
    while(t--){
       ll n,flag=0;
       ll w, wr;
       cin>>n>>w>>wr;
       unordered_map<ll, ll> mp;
        ll total=wr;
       for(ll i=0; i<n; i++){
           ll tmp;
           cin>>tmp;
            mp[tmp]++;
       }

       for(auto &it: mp){
           //weight frequency > 1
           if(it.second > 1){
               total+=(it.second/2)*2*(it.first);
               
           }
       }
        //if total exceeds required w
        if(total >= w) {
            cout<<"YES"<<endl;
        }
        
        else
       cout<<"NO"<<endl;
    }

    return 0;
}
