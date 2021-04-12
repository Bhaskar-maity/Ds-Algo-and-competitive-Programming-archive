// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
// Given an index k, return the kth row of the Pascal’s triangle.

// Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

// Example:

// Input : k = 3

// Return : [1,3,3,1]

//https://www.youtube.com/watch?v=6FLvhQjZqvM
//time- o(n), space - o(n)
vector<int> Solution::getRow(int A) {
    vector<int> result(A+1);
    result[0]=1;
    int m =A;

    for(int i=1; i <= A; i++){
        // pascal trangle value in Ath row ith colum = A c i
        result[i]= (result[i-1] * m--)/i;
    }

    return result;

}

