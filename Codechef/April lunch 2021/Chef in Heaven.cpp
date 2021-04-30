//https://www.codechef.com/LTIME95C/problems/CCHEAVEN

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
       ll l;
       cin>>l;
       string yr;
       cin>>yr;
        unordered_map<char,int> mp;
        int flag=0;
       for(int i=0;i<l; i++){
           mp[yr[i]]++;
           // 1<= L'  <= L
           if(i>0){
               if(mp['0'] != 0){
                       if(mp['1'] / mp['0'] >= 0.5) {
                       flag=1;
                       break;
                   }
               }
               
           }
           
       }
        if(mp['0'] == 0) flag=1;
       if(flag == 1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}
