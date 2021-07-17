// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// Input:
// N = 5
// a[] = {2,3,1,2,3}
// Output: 2 3 
// Explanation: 2 and 3 occur more than once
// in the given array.


class Solution {
public:
    //tortoise method for single no double
    int findDuplicate(vector<int>& a) {
        //s=slow f=fast 
        int s=a[0];
        int f=a[0];
        
        do{
            s=a[s];
            f=a[a[f]];
            
        }while(s!=f);
            
        f=a[0];
        
        while(s!=f){
            s=a[s];
            f=a[f];
        }
        return s;
    }
};

// time- o(n), space - o(1)
// prints the first occur index of duplicate
// 0 -n-1 range
void printDuplicates(int a[], int n) {
    // add code here.
    int c=1;
    for(int i=0; i<n; ++i){
        //go to elemnet index and add n with them
        int ind = a[i] % n;
        //
        a[ind] += n;
    }
    
    for(int i=0; i<n; ++i){
        //if any element occur 2 or more times then the quotient will be > 1
        if(a[i]/n > 1){
            cout<<i<<" ";
            c =0;
        }
    }
    
    if(c) cout<<"-1";
}