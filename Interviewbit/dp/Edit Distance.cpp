int Solution::minDistance(string A, string B) {
    int n=A.length();
    int m = B.length();

    int dp[n+1][m+1];
    for(int i=0; i <= n; i++){
        dp[i][0] = 0;
    }
    for(int i=0; i<=m; i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j <=m; j++){
            if(A[i-1] == B[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    //longest_Common_Substr_size
    int lcs_size = dp[n][m];

    return max(n-lcs_size, m-lcs_size);
}
