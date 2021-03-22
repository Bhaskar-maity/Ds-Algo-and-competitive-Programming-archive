//https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;

        unordered_map<char,int> mp;
    
        //sliding window (i to j is the window)
        int i=0,j=0,cnt=INT_MIN;
        int n = s.size();
        
        while(j<n){
            //if first time in map then put 1
            if( mp.find(s[j]) == mp.end()){
                mp[s[j]]=1;
            }
            else
                mp[ s[j] ]++;
          
            int msize=mp.size();
            
             
            if(msize < j-i+1){
                //shinking window while map size < k, window size k= (j-i+1)
                //as soon as I find a duplicate element then I start reducing window size
                while(msize < j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }

                    i++;
                }
                
            }

            //update cnt, if there no duplicate element
            else if(msize == j-i+1){
                cnt=max(cnt, j-i+1);
                
            }

            //thats caused problem, j++ should be outside of else if
            // 
            j++;
        }

        return cnt;
    }
};