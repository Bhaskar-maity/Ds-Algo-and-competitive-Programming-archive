//-------------gcd

//this
int Solution::gcd(int A, int B) {
    if(B == 0) return A;
    else return gcd(B, A%B);
}

// or
int Solution::gcd(int m, int n) {
         
        if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
  }