// https://www.interviewbit.com/problems/noble-integer/
// Problem Description

// Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.
// Input 1:
//  A = [3, 2, 1, 3]
// Output 1:
//  1
//time-o(nlogn), space - o(1)
int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int flag=0;
    for (int i = 0; i < A.size()-1; i++){

        if(A[i] ==A[i+1]) continue;

        if(A[i] == (A.size() - i - 1)){
            flag = 1;
            break;
        }   
        
    }
    if(A[A.size()-1] == 0) return 1;
    else if(flag == 1) return 1;
    else return -1;
}
