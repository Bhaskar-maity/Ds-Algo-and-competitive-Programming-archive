// https://www.interviewbit.com/problems/maximum-absolute-difference/

// A=[1, 3, -1]

// f(1, 1) = f(2, 2) = f(3, 3) = 0
// f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
// f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
// f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

// So, we return 5.

int Solution::maxArr(vector<int> &A) {
    int mx1=INT_MIN, mx2=INT_MIN, mn1=INT_MAX, mn2= INT_MAX;
    int n =A.size();
    for(int i=0; i<n; i++){
        mx1=max(mx1, A[i]-i);
        mn1=min(mn1, A[i]-i);
        
        mx2=max(mx2, A[i]+i);
        mn2=min(mn2, A[i]+i);
    }
    
    return max(mx1-mn1, mx2-mn2);
}