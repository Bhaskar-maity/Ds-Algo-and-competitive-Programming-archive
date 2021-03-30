//https://www.codechef.com/START2C/problems/SVRT

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	lli n,k;
	cin>>n>>k;
	lli d=ceil(float(n)/float(k));
	int rem=n%k;
	if(rem==0)
	{
	    
	    cout<<d<<" "<<k<<endl;
	}
	
	else
	{
	    cout<<d<<" "<<rem<<endl;
	}
}
	return 0;
}
