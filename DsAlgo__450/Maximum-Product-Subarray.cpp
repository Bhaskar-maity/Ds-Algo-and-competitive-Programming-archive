
//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *a, int n) {
	    long long mx, mn, pr;
	    mx = mn = pr = a[0];
	    
	    for( int i = 1 ; i < n ; i++ ) {
	        if(a[i] < 0) 
	            swap(mx, mn);
	        mx = max((long long) a[i], a[i]*mx);
	        mn = min((long long) a[i], a[i]*mn);
	        
	        if(pr < mx)
	            pr = mx;
	    }
	    
	    return pr;
	}
};