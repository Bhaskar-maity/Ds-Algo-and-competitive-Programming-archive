//https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
//tabulation approach optimal

int lcs(int x, int y, string s1, string s2){
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
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    return t[x][y];
}