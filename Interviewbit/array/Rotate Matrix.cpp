// https://www.interviewbit.com/problems/rotate-matrix/
// You are given an n x n 2D matrix representing an image.

// Rotate the image by 90 degrees (clockwise).
// Example:
// [
//     [1, 2],
//     [3, 4]
// ]
// Then the rotated array becomes:

// [
//     [3, 1],
//     [4, 2]
// ]
//time -o(n2), space - o(1)
void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    //matrix transpose
    for (int i = 0; i < n; i++){
        for(int j = 0; j <i; j++){
            swap(A[i][j], A[j][i]);
        }
    }

    //reverse transpose matrix
    for(int i = 0; i <n; i++){
        reverse(A[i].begin(), A[i].end());
    }

    //return A;
}
