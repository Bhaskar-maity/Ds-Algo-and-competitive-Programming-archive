


#include<bits/stdc++.h>
#define in(arr, n) for (int i=0; i<n; i++) cin >> arr[i]
#define out(arr, n) for (int i=0; i<n; i++) cout << arr[i] << "\n"
#define ll long long int
using namespace std;

ll gcd(ll a, ll b){

    ll remainder=0;

    while(b!=0){

        remainder=a%b;

        a=b;

        b=remainder;

    }

    return a;

}

ll sumOfNum(ll x){
    ll sum=0;
    while(x !=0){
        sum+=x%10;
        x/=10;
    }

    return sum;
    
}

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;

    
    while (t--) {
        ll n;
        cin>>n;
        ll gcdsum=gcd(n, sumOfNum(n));
        if(gcdsum== 1){
            while(gcdsum == 1){
                n=n+1;
                gcdsum=gcd(n, sumOfNum(n));
            }
            cout<<n << endl;
        }
        else{
            cout<< n<< endl;
        }
        
    }

    



    return 0;
}
    


