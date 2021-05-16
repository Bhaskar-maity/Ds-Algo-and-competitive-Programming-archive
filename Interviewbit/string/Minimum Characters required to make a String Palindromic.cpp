// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

// Input 1:
//     A = "ABC"
// Output 1:
//     2
//     Explanation 1:
//         Insert 'B' at beginning, string becomes: "BABC".
//         Insert 'C' at beginning, string becomes: "CBABC".

// Input 2:
//     A = "AACECAAAA"
// Output 2:
//     2
//     Explanation 2:
//         Insert 'A' at beginning, string becomes: "AAACECAAAA".
//         Insert 'A' at beginning, string becomes: "AAAACECAAAA"

// AAA CECA AAA

// i=0, if A[i]!=A[j]
// (AAA CECA )
//2 pointer approach
int Solution::solve(string A) {
    int n=A.size(), cnt=0;
    int i=0, j=n-1;
    if(n==0) return 0;
    while(i<=j){
        if(A[i]!=A[j]){
            //if i still in 1st position
            if(i ==0) {
                cnt++;
                j--;
            }
            //we have to insert in beginning so i=0, even if when i>0
            else {
                //cause when we A[i]=A[j], then that cnt i we have to add, cause now A[i]!=A[j]
                cnt+=i;
                i=0;
            }
            
        }
        else {
            i++; j--;
        }
    }

    return cnt;
}

