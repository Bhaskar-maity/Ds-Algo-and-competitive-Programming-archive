//https://leetcode.com/problems/minimum-window-substring/
// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        string res;
        for(int i = 0; i <t.size(); i++){
            mp[t[i]] ++;
        }

        int i=0,j=0,cnt=mp.size();
        while(j<s.length()){
          if(mp.find(s[j]) != mp.end()){
              mp[s[j]]--;
                if(mp[s[j]] == 0){
                    cnt--;
                }
            }

            if(cnt == 0){
                while(cnt == 0){
                    string temp(s, i, j-i+1);
                    if(temp.length() < res.length()){
                        res = temp;
                    }

                    if(mp.find(s[i]) != mp.end()){
                        if(mp[s[i]] < 0){
                            mp[s[i]]++;
                            i++;
                        }
                        else cnt++;
                        
                    }
                   
                    //i++;
                }

            }
            j++;

        }

        return res;
    }
};