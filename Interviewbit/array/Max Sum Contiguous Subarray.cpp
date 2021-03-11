// //https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
// Input 1:
//     A = [1, 2, 3, 4, -10]

// Output 1:
//     10

// Explanation 1:
//     The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

int Solution::maxSubArray(const vector<int> &A) {
    int cur_sum  = A[0];
    int out_sum = A[0];
    
    for(int i=1; i<A.size(); i++){
        if(cur_sum>=0) 
            cur_sum += A[i];
        else 
            cur_sum = A[i];
        
        if(cur_sum > out_sum) 
            out_sum = cur_sum;
    }
    
    return out_sum;
}
