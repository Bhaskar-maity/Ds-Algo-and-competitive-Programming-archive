// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#
// Input:
// S = "aabacbebebe", K = 3
// Output: 7
// Explanation: "cbebebe" is the longest 
// substring with K distinct characters.

/*
#include <bits/stdc++.h>

using namespace std;
int longestKSubstr(string s, int k);
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    
        string s;
        cin >> s;
        int k;
        cin >> k;

        cout << longestKSubstr(s, k) << endl;
    
}
*/
int longestKSubstr(string s, int k) {
    unordered_map<char,int> mp;
    int i=0,j=0,cnt=INT_MIN;
    int n = s.size();
    
    while(j<n){
       
        if( mp.find(s[j]) == mp.end()){
            mp[s[j]]=1;
        }
        else
            mp[ s[j] ]++;
        //int msize=mp.size();
        
        if(mp.size() < k){
            j++;
        }

        else if(mp.size() == k){
            cnt=max(cnt, j-i+1);
            j++;
        }

        else if(mp.size() > k){
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
        
        
    }
    
    //if map size never would equalto k, then cnt will remain INT_MIN and
    //in this case we have return -1
    // S = "aaaa", K = 2
    // Output: -1
    if(cnt == INT_MIN) 
        return -1;
    else
        return cnt;
}

