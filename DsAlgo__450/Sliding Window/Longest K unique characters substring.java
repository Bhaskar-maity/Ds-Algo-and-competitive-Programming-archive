// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#
// Input:
// S = "aabacbebebe", K = 3
// Output: 7
// Explanation: "cbebebe" is the longest 
// substring with K distinct characters.

//java sliding window Solution
//time complexity - O(n)
class Solution {
    public int longestkSubstr(String s, int k) {
        HashMap<Character, Integer> mp = new HashMap<Character, Integer>();
        int i=0,j=0,cnt=Integer.MIN_VALUE;
        int n = s.length();
        
        while(j<n){
            //if hashmap not contain the char then put 1
            if(!mp.containsKey(s.charAt(j))){
                mp.put(s.charAt(j), 1);
            }
            else
                mp.put(s.charAt(j), mp.get(s.charAt(j)) + 1);
            
            if(mp.size() < k){
                j++;
            }

            else if(mp.size() == k){
                cnt=Math.max(cnt, j-i+1);
                j++;
            }

            else if(mp.size() > k){
                while(mp.size() > k){
                    mp.put(s.charAt(i), mp.get(s.charAt(i)) - 1);
                    if(mp.get(s.charAt(i)) == 0){
                        mp.remove(s.charAt(i));
                    }
                    i++;
                }
                j++;
            }
            
            
            
        }
        
        if(cnt == Integer.MIN_VALUE) 
            return -1;
        else
            return cnt;
        }
}