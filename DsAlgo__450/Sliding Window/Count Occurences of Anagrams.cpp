//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1#

// Input:
// txt = forxxorfxdofr
// pat = for
// Output: 3
// Explanation: for, orf and ofr appears
// in the txt, hence answer is 3.

// Approach-
// declearing  two map for pat a,d txt, 
// initializing with 0,
// hashing pat into pat_map
// sliding window and equality check of two map and if then count++

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
        int k=pat.size();
        int n=txt.size();
        unordered_map <char, int> patm;
        unordered_map<char, int> txtm;
        
        //initializing with zero
        for(int i=0;i<n;i++) txtm[txt[i]] = 0; patm=txtm;
        
        //hashing pat into pat_map
        for (int x = 0; x < k; x++)
        {
            patm[pat[x]]++;
        }
        
        
        int i=0,j=0,count=0;

        //---sliding window
        while(j<n){
            //pushing 
            txtm[txt[j]]++;
            
            if(j-i+1 <  k){
                
                j++;
            }
            else if(j-i+1 == k){
                
                if( txtm == patm){
                    count++;
                    
                }
                txtm[txt[i]]--;
                

                i++; j++;

            }
            
        }
        return count;
            
	}

};