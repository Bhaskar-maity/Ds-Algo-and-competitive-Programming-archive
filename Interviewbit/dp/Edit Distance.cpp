// https://www.youtube.com/watch?v=3_KL0hiPsNE
// https://www.interviewbit.com/problems/edit-distance/
// Input 2:
//     A = "Anshuman"
//     B = "Antihuman"

// Output 2:
//     2

// Explanation 2:
//     => Operation 1: Replace s with t.
//     => Operation 2: Insert i.

// geek  => n
// gesek  =? m


int dp[451][451];

int func(string a,string b, int n, int m){
    if(n==-1) return 1+m;
    if(m==-1) return 1+n;

    if(dp[n][m] != -1) return dp[n][m];
    if(a[n-1]==b[m-1]) return dp[n][m] = func(a,b,n-1,m-1);

    int x= func(a,b,n-1,m); //insert
    int y = func(a,b,n,m-1); // delete
    int z = func(a,b,n-1,m-1); //replace

    return dp[n][m] = 1 + min(x, min(y, z));
}

int Solution::minDistance(string A, string B) {
    int n=A.length();
    int m = B.length();
    memset(dp,-1,sizeof(dp));
    return func(A,B,n,m);

    
}


