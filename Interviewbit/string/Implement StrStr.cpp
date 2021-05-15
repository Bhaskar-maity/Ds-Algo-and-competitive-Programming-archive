//https://www.interviewbit.com/problems/implement-strstr/
//  strstr - locate a substring ( needle ) in a string ( haystack ). 

// Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.


//---approach
// 1st loop 0-2 [m-n]
// 2nd loop 0-1 [n]

// // aba ab
// // ab
//https://www.youtube.com/watch?v=_ZWnkyae2gA
int Solution::strStr(const string A, const string B) {
    //A main string,
    int m=A.size();
    //B substring
    int n=B.size();
    //n<m
    if(A.size()==0 || B.size()==0) return 0;


    for(int i=0; i<=m-n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(A[i+j]!=B[j]){
                flag = false;
                break;
            }
        }if(flag){
            return i;
        }
    }

    return -1;
}
