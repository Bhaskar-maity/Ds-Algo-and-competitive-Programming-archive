

// https://www.codechef.com/START3C/problems/HIRETEST
// A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F').

// To pass the test, each candidate needs to either solve X or more problems completely, or solve (X−1) problems completely, and Y or more problems partially.
// Sample Input:
// 3
// 4 5
// 3 2
// FUFFP
// PFPFU
// UPFFU
// PPPFP
// 3 4
// 1 3
// PUPP
// UUUU
// UFUU
// 1 3
// 2 2
// PPP
// Sample Output:
// 1100
// 101
// 0


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
       int n,m,x,y;
       cin>>n>>m;
       cin>>x>>y;
       //vector<string> s;
       string ans("");
       
       for(int i=0; i<n; i++){
           unordered_map<char, int> mp;
           string tmp;
           cin>>tmp;
           for(int j=0; j<tmp.size(); j++){
               mp[tmp[j]]++;
           }
           
           if(mp['F'] >= x || (mp['F']>= (x-1) && mp['P']>=y)){
               ans.pb('1');
           }
           else ans.pb('0');
           
       }
       
       cout<<ans<<endl;
    }

    return 0;
}
