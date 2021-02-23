//https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1#

/*
Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.

Input : str1 = "geeksforgeeks"
str2 = "geeks"
Output: 8
Explanation: 8 insertions */

// its a lcs type problem with little change
class Solution{
		

	public:
	int minOperations(string s1, string s2) 
	{ 
        int x=s1.size();
        int y=s2.size();
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
        //no of del+ inset= size(s1)+ size(s2) - 2* common part
        //t[x][y]= longest commmen subsequence
        return x + y - 2*t[x][y];
	} 
};