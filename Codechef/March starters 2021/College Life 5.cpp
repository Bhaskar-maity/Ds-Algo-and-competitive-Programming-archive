//https://www.codechef.com/START2C/problems/COLGLF5

#include<bits/stdc++.h>
#define in(arr, n) for (int i=0; i<n; i++) cin >> arr[i]
#define out(arr, n) for (int i=0; i<n; i++) cout << arr[i] << "\n"
#define ll long long int
using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input1.trt", "w", stdin);
    freopen("output1.trt", "w", stdout);
    #endif

    int t;
    cin >> t;

    
    while (t--) {
        ll n,m,count=0;
        //default match football so pre=1
	    int pre=1;
	    cin>>n>>m;
	    ll z;
        set< pair<long int, int> > s;
	    for(int i=0;i<n;i++){
            cin>>z;
            //football timing s.second = 1
            s.insert({z,1});
        }
        for(int i=0;i<m;i++){
            cin>>z;
            //cricket timing s.second = 0
            s.insert({z,0});
        }
        
        for(auto it:s){
            
            
                if(pre!=it.second){
                    count++;
                }
                pre=it.second;
            
        }
        cout<<count<<endl;
    }

    



    return 0;
}