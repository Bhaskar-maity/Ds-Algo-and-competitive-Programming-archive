
//https://www.codechef.com/LTIME95C/problems/EQUINOX

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
    string equinox ("EQUINOX");
    unordered_map<char,int> mp;
    for(int i=0; i<equinox.length(); i++){
        mp[equinox[i]]++;
    }
    while(t--){
        
       int n;
       ll a,b;
       cin>>n>>a>>b;
       ll Sarthak=0 ,Anuradha=0 ;
       
       for(int i=0; i<n; i++){
           string tmp;
           cin>>tmp;
           //debug(mp[tmp[0]]);
           if(mp[tmp[0]] > 0){
               Sarthak+=a;
               //debug(Sarthak);
           }
           else Anuradha+=b;
       }
       if(Sarthak == Anuradha) cout<<"DRAW"<<endl;
       else if(Sarthak > Anuradha) cout<<"SARTHAK"<<endl;
       else cout<<"ANURADHA"<<endl;
    }

    return 0;
}
