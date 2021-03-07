//here used mod 1003 of ans
//https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1#

// Input: N = 7
// S = T|T&F^T
// Output: 4
// Explaination: The expression evaluates 
// to true in 4 ways ((T|T)&(F^T)), 
// (T|(T&(F^T))), (((T|T)&F)^T) and (T|((T&F)^T)).


//
class Solution{
public:
    //dp array
    int dp[201][201][2];
    
    int countWays(int N, string S){
        //-1 initialization
        memset( dp , -1 , sizeof dp );
        return parenthesis_count(S, 0, N-1, 1);
    }
    
    
    //
    int parenthesis_count(string s, 
                        int i, 
                        int j, 
                        int isTrue)
    {
        // Base Condition
        if (i > j)
            return 0;
        if (i == j) {
            if (isTrue == 1)
                return (s[i] == 'T'? 1 : 0);
            else
                return (s[i] == 'F'? 1 : 0);
        }
    
        if (dp[i][j][isTrue] != -1)
            return dp[i][j][isTrue];
        int ans = 0;
        for (int k = i + 1
            ; k <= j - 1; k = k + 2) 
        {
            int leftF, leftT, rightT, rightF;
            //checking
            if (dp[i][k - 1][1] == -1) 
            {
                leftT = parenthesis_count(s, i, k - 1, 1);
            } // Count no. of T in left partition
            else {
                leftT = dp[i][k - 1][1];
            }
    
            if (dp[k + 1][j][1] == -1) 
            {
                rightT = parenthesis_count(s, k + 1, j, 1);
            } // Count no. of T in right partition
            else
            {
                rightT = dp[k + 1][j][1];
            }
    
            if (dp[i][k - 1][0] == -1) 
            {
                // Count no. of F in left partition
                leftF = parenthesis_count(s, i, k - 1, 0);
            }
            else
            {
                leftF = dp[i][k - 1][0];
            }
    
            if (dp[k + 1][j][0] == -1) 
            {
                // Count no. of F in right partition
                rightF = parenthesis_count(s, k + 1, j, 0);
            }
            else
            {
                rightF = dp[k + 1][j][0];
            }


            //operators check
            if (s[k] == '&')
            {
                if (isTrue == 1)
                    ans += leftT * rightT;
                else
                    ans += leftF * rightF + leftT * rightF
                        + leftF * rightT;
            }
            else if (s[k] == '|')
            {
                if (isTrue == 1)
                    ans += leftT * rightT + leftT * rightF
                        + leftF * rightT;
                else
                    ans = ans + leftF * rightF;
            }
            else if (s[k] == '^')
            {
                if (isTrue == 1)
                    ans = ans + leftF * rightT + leftT * rightF;
                else
                    ans = ans + leftT * rightT + leftF * rightF;
            }
            //mod 1003 used
            ans%=1003;
            dp[i][j][isTrue] = ans;
        }
        return ans;
    }

};