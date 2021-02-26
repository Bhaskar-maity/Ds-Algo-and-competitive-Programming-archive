//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

// Exampel 1:

// Input: str = "axxxy"
// Output: 2
// Explanation: The longest repeating subsequenece
// is "xx".
// Example 2:

// Input: str = "aab"
// output: 1
// Explanation: The longest reapting subsequenece
// is "a".

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    
            int n = str.size();
            int t[n+1][n+1];

            for(int i = 0; i <= n; i++){
                t[i][0] = 0;
                t[0][i] = 0;
            }
            
            for(int i =1; i<n+1; i++){
                for(int j =1; j<n+1; j++){
                    //i!=j it's the code added in lcs solution, basically finding lcs but excluding indexs i,j not same 
                    if(str[i-1] == str[j-1] && i!=j){
                        t[i][j] = 1 + t[i-1][j - 1];
                    }
                    else 
                        t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
            return t[n][n];
        }        

};