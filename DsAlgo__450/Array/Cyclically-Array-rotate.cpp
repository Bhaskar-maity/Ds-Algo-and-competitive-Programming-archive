#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int tmp=a[n-1];
	    for(int i=n-1;i>=1;i--){
	        a[i]=a[i-1];
	    }
	    a[0]=tmp;
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<"\n";
	}
	return 0;
}