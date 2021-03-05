//https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1#


// Input: str = "ababbbabbababa"
// Output: 3
// Explaination: After 3 partitioning substrings 
// are "a", "babbbab", "b", "ababa".

class Solution{
public:
int dp[501][501];
//is palindrone func
bool isPalindrome(string str, int i, int j)
   {
    while (i <= j)
    {
        if (str[i++] != str[j--]) 
            return false;
    }
    return true;
    }


    int fun(string str, int i, int j)
    {
        if(dp[i][j]!=-1)
        return dp[i][j];
        if (i >= j || isPalindrome(str, i, j))
        {
            dp[i][j]=0;
             return 0;
        }
        int mn = INT_MAX;
        for (int k = i; k <= j-1; k++)
        {
            int left,right;
            //check if left part is solved or not
            if(dp[i][k] != -1)
                left = dp[i][k];
            else 
                left = fun(str, i, k);
            //check if right part is solved or not
            if(dp[k+1][j] != -1)
                right = dp[k+1][j];
            else 
                right = fun(str,k+1,j);
            
            int temp= 1+ left + right;
            
            mn = min(temp, mn);
        }
        return dp[i][j]=mn;
    }


    
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        int n=str.length();
        return fun(str,0,n-1);
    }
};