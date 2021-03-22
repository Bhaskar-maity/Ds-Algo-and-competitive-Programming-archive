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
    
        //sliding window
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
                //shinking window while map size < k(j-i+1)
                while(msize < j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }

                    i++;
                }
                
            }

            else if(msize == j-i+1){
                cnt=max(cnt, j-i+1);
                j++;
            }

            
        }

        return cnt;
    }
};