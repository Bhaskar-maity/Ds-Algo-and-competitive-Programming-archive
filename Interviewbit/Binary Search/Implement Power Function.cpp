// https://www.interviewbit.com/problems/implement-power-function/
// Input : x = 2, n = 3, d = 3
// Output : 2

// 2^3 % 3 = 8 % 3 = 2.

int power(long long a, long long b, int &mod ){
    if(b==0) return 1;
    long long int res = power(a,b/2,mod);

    res = ((long long) res * (long long) res)%mod;

    if(b%2!=0){
        res = (res * a)%mod;
    }
    return res;
}
int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (x == 0)
        return 0;

    int res = power(x, n, d);
    if(res< 0){
        return d+ (res%d);
    }

    return res;
}
