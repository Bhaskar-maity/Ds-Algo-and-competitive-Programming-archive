//https://www.codechef.com/SPNT2021/problems/BALLGAME

#include <iostream>
#include <cctype>
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
    int n,vIdx=0,ans=0;
    cin>>n;
    vector<int> v;
    char s[n];
    rep(i,0,n){
        cin>>s[i];
        if( isdigit(s[i]) ){
            v.pb( s[i] - 48 );
            vIdx++;
        }
        
        else if(s[i] == 'X'){
            if(v.size()!=0){
                //erase previous
                v.erase(v.begin() + vIdx - 1);
                vIdx--;
            }
        }
        else if(s[i] == 'Y'){
            v.pb(v[vIdx-1]*2);
            vIdx++;
        }
        
        else if(s[i] == '+') {
            v.pb(v[vIdx-1] + v[vIdx-2]);
            vIdx++;
        }
        
        
    }
    
    rep(i,0,v.size()){
        ans+=v[i];
    }
    cout<<ans;

    return 0;
}
