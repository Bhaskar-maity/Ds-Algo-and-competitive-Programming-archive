#include <iostream>
#include <unordered_map>
using namespace std;
// #define ll long long

int main() {
	//code
	int t;
	
	cin>>t;
	
	while(t--){
        int flag=0;
	     int m,n;
	    cin>>m>>n;
	    int a1[m],a2[n];
	    
	    unordered_map<int ,int> h;
	    for(int i=0; i<m; i++) {
	        cin>>a1[i];
	        h[ a1[i] ] =1;
	    }

        for(int i=0; i<n; i++) {
	        cin>>a2[i];
	        if(h.find(a2[i]) == h.end()) { 
                flag = 1;
                break;
            }
            else 
                continue;
	    }

        if(flag == 1 ) {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
	}
	return 0;
}