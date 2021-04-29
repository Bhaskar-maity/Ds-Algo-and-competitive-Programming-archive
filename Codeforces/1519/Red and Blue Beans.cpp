// //https://codeforces.com/contest/1519/problem/A
// You have r red and b blue beans. You'd like to distribute them among several (maybe, one) packets in such a way that each packet:

// has at least one red bean (or the number of red beans ri≥1);
// has at least one blue bean (or the number of blue beans bi≥1);
// the number of red and blue beans should differ in no more than d (or |ri−bi|≤d)
// 4
// 1 1 0
// 2 7 3
// 6 1 4
// 5 4 0
// outputCopy
// YES
// YES
// NO
// NO

#include <iostream>
#include<bits/stdc++.h>
 
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
       ll r,b,d;
       cin>>r>>b>>d;
       
       int hlp1 = max(r,b) / min(r,b);
       int hlp2 = max(r,b) % min(r,b);
       if(hlp2 == 0){
           if(hlp1-1 <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       }
       else{
           if(hlp1 <= d) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       }
       
    }

    return 0;
}
