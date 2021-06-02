// https://www.interviewbit.com/problems/multiply-strings/
// https://www.youtube.com/watch?v=CnEFY5Y3Z68

// For example,
// given strings "12", "10", your answer should be “120”.

// NOTE : DO NOT USE BIG INTEGER LIBRARIES ( WHICH ARE AVAILABLE IN JAVA / PYTHON )

// 45
// 12
// ----
//  90
// 45
// -----
// 540

string Solution::multiply(string A, string B) {
    int n = A.length();
    int m = B.length(),sum=0;
    
    string val(n+m,'0');
   

    for(int i = n-1; i >=0; i--) {
        for(int j = m-1; j >=0; j--){
            sum = (A[i]-'0')*(B[j] - '0') + (val[i+j+1]-'0');
            //value add in the last position

            val[i+j+1] = sum%10 + '0';

            //carry store
            val[i+j] = ((val[i+j]-'0') + sum/10) + '0' ;
        }
    }

    for(int i=0; i<n+m; i++){
        if(val[i] != '0' ){
            return val.substr(i);
        }
    }
     return "0";
    
}