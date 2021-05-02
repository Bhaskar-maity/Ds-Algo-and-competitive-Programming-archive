// https://www.interviewbit.com/problems/power-of-two-integers/
// Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

// Example

// Input : 4
// Output : True  
// as 2^2 = 4. 
//---used this formula
// a^p = n , a>0, p>1
// p loga = logn
// p = logn/loga

// log a = logn/p;
// a = e ^(logn/p)

int Solution::isPower(int n) {
    int p;
    //iterate a , 1 to sqrt(n)
    for(int i=1; i<=sqrt(n); i++){
        p = log(n)/log(i);
        if(pow(i,p) == n){
            return 1;
        }
    }

    return 0;
}