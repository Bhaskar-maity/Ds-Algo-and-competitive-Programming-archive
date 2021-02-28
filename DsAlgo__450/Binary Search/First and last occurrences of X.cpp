//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0#

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, x;
	cin >> t;
	while(t--){
	    cin >> n >> x;
	    int l, r, indexl=-1, indexr=-1;
	    vector<int> ar(n);
	    
	    for(int i=0; i<n; i++)
	        cin >> ar[i];
	   
	    // check left point
	    l = 0; r = n-1;
	    while(l <= r){
	        int mid = l + (r-l)/2;
	        
	        if(ar[mid] == x and ar[mid-1] != x){
	            indexl = mid;
	            break;
	        }
	        
	        if((x < ar[mid]) or (ar[mid] == x and ar[mid-1] == x))
	            r = mid-1;
	       
	        else if(x > ar[mid])
	            l = mid+1;
	    }
	   
	    // check right point
	    l=0; r=n-1;
	    while(l <= r){
	        int mid = l + (r-l)/2;
	        
	        if(ar[mid] == x and ar[mid+1] != x){
	            indexr = mid;
	            break;
	        }
	        
	        if(x < ar[mid])
	            r = mid-1;
	       
	        if((x > ar[mid]) or (ar[mid] == x and ar[mid+1] == x))
	            l = mid+1;
	    }
	    
	    if(indexl != -1)
	        cout << indexl << " " << indexr << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}