// https://www.interviewbit.com/problems/length-of-last-word/
// Given s = "Hello World",

// return 5 as length("World") = 5.



int Solution::lengthOfLastWord(const string A) {
    int i=A.size()-1;
    int cnt=0;
    while(A[i]==' ' && i>=0){
        i--;
    }

    while(i>=0 && A[i]!=' '){
        cnt++;
        i--;
    }
    return cnt;
}
