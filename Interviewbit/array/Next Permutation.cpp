vector<int> Solution::nextPermutation(vector<int> &A) {
    int idx1, idx2, n=A.size();
    for(int idx1=n-2; idx1>=0; idx1--){
        if(A[idx1] < A[idx1+1]){
            break;
        }
    }
    
    if (idx1 == -1) {
        reverse(A.begin(), A.end());
        return A;
    }
    
    for(int idx2=n-1; idx2>idx1; idx2--){
        if(A[idx2] > A[idx1]){
            break;
        }
    }

    swap(A[idx2], A[idx1]);
    reverse(A.begin() + idx1 + 1, A.end());

    return A;
}

// Arr - 6 1 5 4 3 
// idx1=1
// idx2=4
// after swapping - 6 3 5 4 1
3 2 1