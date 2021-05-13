// https://www.interviewbit.com/problems/amazing-subarrays/
// Input
//     ABEC

// Output
//     6

// Explanation
// 	Amazing substrings of given string are :
// 	1. A
// 	2. AB
// 	3. ABE
// 	4. ABEC
// 	5. E
// 	6. EC
// 	here number of substrings are 6 and 6 % 10003 = 6.

int Solution::solve(string A) {

int n=A.length(),count=0;
for(int i=0;i<n;i++){
    if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' || 
       A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){            
        count+=n-i;
    }
}
return count%10003;
}