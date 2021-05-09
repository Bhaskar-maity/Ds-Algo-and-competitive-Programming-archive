// https://www.interviewbit.com/problems/square-root-of-integer/
// Given an integar A.

// Compute and return the square root of A.

// If A is not a perfect square, return floor(sqrt(A)).

// DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY

int Solution::sqrt(int A) {

long int start = 0;
long int end = A;
int ans = -1;

while(start<=end)
{
    long int mid = end - (end - start)/2;
    
    if(mid * mid == A)
    return mid;
    
    if(mid*mid > A)
    end = mid - 1;
    
    if(mid*mid < A)
    {
        ans = mid;
        start = mid + 1;
    }
}

return ans;
}