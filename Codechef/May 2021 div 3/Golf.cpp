


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
//https://www.codechef.com/MAY21C/problems/LKDNGOLF

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
    ll N,x,k,low,high, size;
    int f;
    while(t--){
       
       
       cin>>N>>x>>k;
       //it's a pattern found int this
       ll rem= (N+1)%k;
       //x%k == 0  [0%k] ==> for forward iterate
       //x%k==rem  [(N+1)%k ]==> for backward iterate
        if(x%k == 0 || x%k==rem) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

       
        
    }

    return 0;
}
