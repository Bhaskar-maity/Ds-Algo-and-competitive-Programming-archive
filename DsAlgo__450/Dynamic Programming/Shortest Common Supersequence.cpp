//https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1

// Input:
// X = abcd, Y = xycd
// Output: 6
// Explanation: Shortest Common Supersequence
// would be abxycd which is of length 6 and
// has both the strings as its subsequences.

int shortestCommonSupersequence(char* X, char* Y, int x, int y) {
    int t[x+1][y+1];
    //initialisation
    for(int i = 0; i <= x; i++)
        t[i][0] = 0;
        
    for(int j = 0; j <= y; j++)
        t[0][j] = 0;
    //top down approach
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= y; j++)
        {
            if(X[i-1]==Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    return x+y-t[x][y];

}