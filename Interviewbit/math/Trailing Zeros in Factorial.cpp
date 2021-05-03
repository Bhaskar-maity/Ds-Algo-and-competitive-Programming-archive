// no of 5 in n! is the no of 0 in trailing 0 
//cause 5 * 2 =10,
// will check

int Solution::trailingZeroes(int A) {
    int cnt=0;
    while(A>0){
        cnt += A/=5;
        
    }
    
    return cnt;
}
