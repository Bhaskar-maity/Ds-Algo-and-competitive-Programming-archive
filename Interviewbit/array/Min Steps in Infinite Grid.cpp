//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
// Example Input
// Input 1:

//  A = [0, 1, 1]
//  B = [0, 1, 2]


// Example Output
// Output 1:

//  2
//  Given three points are: (0, 0), (1, 1) and (1, 2).
//  It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
//manhatan distance
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    int k=0;
    while(k<A.size()-1)
    {
        steps+=max(abs(A[k]-A[k+1]),abs(B[k]-B[k+1]));
        k++;
    }
    
    return steps;
}
