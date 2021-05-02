// https://www.interviewbit.com/problems/palindrome-integer/
// Input : 12121
// Output : True

// Input : 123
// Output : False

int Solution::isPalindrome(int a) {
    //storing a in n, 
    int n=a;
    int ra=0;
    //no reverse
    while (a>0){
        int tmp = a%10;
        a/=10;
        ra = ra*10 + tmp;
    }
    
    //checking with actual no
    if(ra == n) return 1;
    else return 0;
}
