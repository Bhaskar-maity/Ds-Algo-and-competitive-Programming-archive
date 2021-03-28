//https://www.codechef.com/START2C/problems/NOBEL

#include <iostream>
#include<bits/stdc++.h>
 
#define pb push_back
#define ppb pop_back




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
       int n, m,f=0;
       cin>>n>>m;
       int a[n];
       unordered_map<int,int> map;
       for(int x=0; x<n; x++){
           cin>>a[x];
           map[a[x]]++;
       }

       for(int i=1; i<=m; i++){
           if(map.find(i) == map.end()){ 
               f=1;
               break;
           }
       }
       if(f==1)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }

    return 0;
}
