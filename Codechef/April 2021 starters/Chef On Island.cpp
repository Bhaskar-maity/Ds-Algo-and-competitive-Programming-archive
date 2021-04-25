


// https://www.codechef.com/START3C/problems/CCISLAND
// Suppose Chef is stuck on an island and currently he has x units of food supply and y units of water supply in total that he could collect from the island. He needs xr units of food supply and yr units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly D days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?
// 3
// 4 2 1 1 1
// 4 2 1 3 1
// 4 2 4 2 2
// Sample Output:
// YES
// NO
// NO

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
        int flag =0;
       int x,y,xr,yr,d;
       cin>>x>>y>>xr>>yr>>d;
       
       for(int i=0; i<d; i++){
           x = x-xr;
           y= y-yr;
           if(x <0 || y<0){
               flag =1;
               break;
           }
            
       }
       if(flag == 1){
           cout<<"NO"<<endl;
       }
       else
        cout<<"YES"<<endl;
    }

    return 0;
}
