// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#
// Input:
// S = "aabacbebebe", K = 3
// Output: 7
// Explanation: "cbebebe" is the longest 
// substring with K distinct characters.

int longestKSubstr(string s, int k) {
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
        
        if(msize < k){
            j++;
        }

        else if(msize == k){
            cnt=max(cnt, j-i+1);
            j++;
        }

        else if(msize > k){
            while(msize > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }

    return cnt;
}