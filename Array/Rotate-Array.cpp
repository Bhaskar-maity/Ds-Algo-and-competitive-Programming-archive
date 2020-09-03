//QLink- https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	
	cin>>t;
	while(t--){
	   long n,d;
	   cin>>n>>d;
	   int a[n+d];
	   for(long i=0;i<n;i++) cin>>a[i];
	   for(long i=0,j=n;i<d && j<n+d;i++,j++) a[j]=a[i];
	   //print
	   for(long i=d;i<n+d;i++) cout<<a[i]<<" ";
	   cout<<endl;
	}
	return 0;
}