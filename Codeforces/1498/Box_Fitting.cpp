


#include<bits/stdc++.h>
#define in(arr, n) for (int i=0; i<n; i++) cin >> arr[i]
#define out(arr, n) for (int i=0; i<n; i++) cout << arr[i] << "\n"
#define ll long long int
using namespace std;



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
        ll n,w;
        cin>>n>>w;
        if( w==0){
            cout<<0<<endl;
            break;
        } 
        ll arr[n];
        unordered_map<long long int, long long int>  mp;
        for (ll i=0; i<n; i++){ 
            cin >> arr[i];
            mp[arr[i]]++;
        }

        ll count=0;

        for (auto x : mp){
            int tempCount=0;
            while(x.second != 0){
                if((x.first * x.second) < w){
                    tempCount++;
                    x.second--;
                }
                else {
                    tempCount+=x.second;
                    x.second=0;
                }
            }
            if(tempCount > count){
                count=tempCount;
            }
        }
        cout<<count<<endl;
        
    }

    



    return 0;
}
    


