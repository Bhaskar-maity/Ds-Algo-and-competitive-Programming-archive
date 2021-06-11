
int Solution::braces(string A) {
    for(int i = 1; i <A.size(); i++){
        if(A[i] == A[i-1] && A[i]=='('){
            return 1;
        }
    }
    return 0;
}
