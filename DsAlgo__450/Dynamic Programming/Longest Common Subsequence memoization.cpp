
//https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#

int lcs_Memoization(int x, int y, string s1, string s2, int t[][101]){
    
    if(x==0 || y==0)
        return t[x][y] = 0;
    if(t[x][y] != -1)
        return t[x][y];

    if(s1[x-1] == s2[y-1]){
        return t[x][y] = (1+ lcs_Memoization(x-1, y-1, s1, s2,t));
        
    }

    else{
        return t[x][y] =  max(lcs_Memoization(x, y-1, s1, s2,t), lcs_Memoization(x-1, y, s1, s2,t));
        
    }

    
}

int lcs(int x, int y, string s1, string s2){
    int t[x+1][101];
    memset(t, -1, sizeof(t));
    return lcs_Memoization(x,y,s1,s2,t);
}