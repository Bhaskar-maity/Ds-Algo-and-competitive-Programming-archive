

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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    FAST;
    ll t;
    cin>>t;
    
    for(int p=1; p<=t; p++){
       int x,y,pay=0;
       cin>>x>>y;
       string s;
       cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '?'){
                s.erase(s.begin()+i);
            }
        }
        for(int i=1; i<s.size(); i++){
            if(s[i] == 'J'){
                if(s[i-1] == 'C'){
                    pay+=x;
                }
            }
            if(s[i] == 'C'){
                if(s[i-1] == 'J'){
                    pay+=y;
                }
            }
            
        }

        cout<<"Case #"<<p<<": "<<pay<<endl;
    }

    return 0;
}
