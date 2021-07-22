
//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#

// https://www.youtube.com/watch?v=x7YW7MAvMiY&t=310s
// https://www.youtube.com/watch?v=lXVy6YWFcRM&t=621s

// Input: A[] = { 6, -3, -10, 0, 2 }

// Output: 180  // The subarray is {6, -3, -10}



// Input: A[] = {-1, -3, -10, 0, 60 }

// Output: 60  // The subarray is {60}



// Input: A[] = { -2, -3, 0, -2, -40 }

// Output: 80  // The subarray is {-2, -40}
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