// 2^x = A
// x log 2 = log A
// x = log A/log 2
// if 2^x == A return true
// https://www.interviewbit.com/problems/power-of-2/
// return 1 if the number is a power of 2 else return 0

// Example:

// Input : 128
// Output : 1

int Solution::power(string A) {
    long  double n = stold(A),x=0;
    
    if (n==1) return 0;
    
    x = log2(n);
    
    if(floor(x) == x) return 1;
    
    return 0;

    
}