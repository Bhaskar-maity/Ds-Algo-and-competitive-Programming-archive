// A, AB, 
// A - z

// 18
// 1 * 10^1 + 8*10^0

// AB
// A * 26^1 + B* 26^0

int Solution::titleToNumber(string A) {
    int res=0;
    //n= power of base 26
    int n = A.length() - 1;
    for(int i = 0; i <A.length(); i++) {
        int tmp = A[i] - 'A' + 1;
        res += (tmp * pow(26,n));
        n--;
    }

    return res;
}
