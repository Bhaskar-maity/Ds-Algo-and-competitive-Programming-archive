#include<bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
	//code
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
    int t,n,m;
	cin>>t;

    while(t--){
        int d;
        int min=INT_MAX;
        cin>>n;
        int a[n];

        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        
        sort(a,a+n);
        
        cin>>m;


        for(int i=0; i<n-m+1; i++){
            d=a[i+m-1] - a[i];
            if(d<min) min=d;
        }

        cout<<min<<endl;
    }
	return 0;
}