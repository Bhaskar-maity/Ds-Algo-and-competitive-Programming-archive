//https://www.codechef.com/SPNT2021/problems/SOLDIER1
// Input - :
// 6
// 5 2 4 5 3 5
// Output - 5
// Explanation -
// There are 4 total soldiers numbered 2,3,4,5. In which soldier number 2 only fought in the war once. Soldier number 3 fought in was once and soldier number 4 also fought in the war only once. But the soldier number 5 fought 3 times in the war, hence the powerful soldier is soldier number 5.



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
#define rep(i, a, n) for(ll i = a ; i < n ; i++)
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
    ll n,ct=0,ans;
    cin>>n;
    ll a[n];
    unordered_map<ll, ll> m;
    rep(i,0,n){
        cin>>a[i];
        //m[a[i]] =0;
        m[a[i]]++;
    }
    rep(i,0,n){
        if(ct<m[a[i]]){
            ct= m[a[i]];
            ans=a[i];
        }
        
    }
    
    cout<<ans;
    
    

    return 0;
}
