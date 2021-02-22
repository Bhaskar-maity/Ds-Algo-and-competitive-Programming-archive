//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#

class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int x, int y)
    {
        int res=0;
        int t[x+1][y+1];
        for(int i = 0; i <= x; i++)
            t[i][0] = 0;
            
        for(int j = 0; j <= y; j++)
            t[0][j] = 0;
    
        for(int i = 1; i <= x; i++)
        {
            for(int j = 1; j <= y; j++)
            {
                if(s1[i-1]==s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                    res= max(res, t[i][j]);
                }
                else {
                    t[i][j] = 0;
                }
            }
        }
        return res;
    }
};