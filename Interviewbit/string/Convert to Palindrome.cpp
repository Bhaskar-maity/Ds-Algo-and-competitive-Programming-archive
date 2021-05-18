// //https://www.interviewbit.com/problems/convert-to-palindrome/

// Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

// If it is possible then return 1 else return 0.
// Input 1:

//  A = "abcba"
//  Output 1:

//  1
int Solution::solve(string A) {
    int n=A.size(), cnt=0;
    int i=0, j=n-1;
    if(n==0) return 0;
    while(i<=j){
        if(A[i]!=A[j]){
            
            if(A[i+1]==A[j]){
                cnt++;
                i++;
            }
            else if(A[i]==A[j-1]){
                cnt++;
                j--;
            }
            else return 0;
            
               
            
        }
        else {
            i++; j--;
        }
    }
    
    if(cnt>1) {
                 return 0;
                 
            }
            else
    return 1;
}
