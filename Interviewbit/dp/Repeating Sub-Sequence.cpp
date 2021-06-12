// https://www.interviewbit.com/problems/repeating-subsequence/
// Example Input
// Input 1:

//  A = "abab"

// Example Output
// Output 1:

//  1

// Example Explanation
// Explanation 1:

//  "ab" is repeated.


int Solution::anytwo(string A) {
    
    int n = A.length();
    int i, j, k;
    int dp[n+1][n+1];

    for(i=0; i<=n; i++){
        dp[0][i] = 0;
        dp[i][0] = 0;
    }


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(A[i-1] == A[j-1] && i!=j)
                dp[i][j] = dp[i-1][j-1] + 1;
            
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    if(dp[n][n] >= 2) return 1;
    else return 0;
    
}
