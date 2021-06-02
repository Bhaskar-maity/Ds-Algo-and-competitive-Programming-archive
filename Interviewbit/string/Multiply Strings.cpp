45
12
----------------------------------------------------------------
 90
45
----------------------------------------------------------------
540

string Solution::multiply(string A, string B) {
    int n = A.length();
    int m = B.length(),sum=0;
    string ans;
    int val[n+m];
    memset(val, -1,n+m-1);

    for(int i = n-1; i >=0; i--) {
        for(int j = m-1; j >=0; j--){
            sum = A[i]*B[j];
            //value add in the last position

            val[i+j+1] = sum%10;

            //carry store
            val[i+j] = sum/10;
        }
    }

    for(int i=0; i<n+m; i++){
        if(val[i] != -1 ){
            ans+=(char)val[i];
        }
    }
    if(ans.size()==0) return "0";
    else return ans;
}
