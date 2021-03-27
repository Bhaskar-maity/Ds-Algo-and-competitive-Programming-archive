//https://codingcompetitions.withgoogle.com/codejam/round/000000000043580a/00000000006d0a5c

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
       int n,countSum=0;
       cin>>n;
       vector<int> a(n);
       for(int i=1; i<=n; i++){
           cin>> a[i];
       }

        for(int i=1; i<n; i++){
            int temp = a[i], jpointer=i;
            for(int j=i; j<=n; j++){
                if(a[j] <= temp){
                    temp = a[j];
                    jpointer = j;
                }
            }
            reverse(a.begin()+i, a.begin()+jpointer+1);
            countSum+=jpointer - i +1;
        }

        cout<<"Case #"<<p<<": "<<countSum<<endl;
    }

    return 0;
}
