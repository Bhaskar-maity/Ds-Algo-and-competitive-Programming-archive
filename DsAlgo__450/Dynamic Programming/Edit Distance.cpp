//https://www.geeksforgeeks.org/edit-distance-dp-5/
//https://practice.geeksforgeeks.org/problems/edit-distance3702/1#
// Input: 
// s = "geek", t = "gesek"
// Output: 1
// Explanation: One operation is required 
// inserting 's' between two 'e's of str1.


class Solution
{
	public:
		int editDistance(string s1, string s2)
		{
		    int x=s1.size();
            int y=s2.size();
            int t[x+1][y+1];

            //initialization
            for(int i = 0; i <= x; i++)
                t[i][0] = i;
                
            for(int j = 0; j <= y; j++)
                t[0][j] = j;

            for(int i = 1; i <= x; i++)
            {
                for(int j = 1; j <= y; j++)
                {
                    //copy the pre
                    if(s1[i-1]==s2[j-1]){
                        t[i][j] =  t[i-1][j-1];
                    }
                    else {
                         //min(replace, min(delete, insert ))
                        t[i][j] = 1 + min(t[i-1][j-1], 
                         min(t[i-1][j] , t[i][j-1] ));
                    }
                }
            }
            
            
            return t[x][y];
            
		}
};