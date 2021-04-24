// https://www.interviewbit.com/problems/set-matrix-zeros/
// Input 1:
//     [   [1, 0, 1],
//         [1, 1, 1], 
//         [1, 1, 1]   ]

// Output 1:
//     [   [0, 0, 0],
//         [1, 0, 1],
//         [1, 0, 1]   ]

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int row = A.size();
    int col = A[0].size();
    unordered_set<int> r;
    unordered_set<int> c;
    for (int i = 0; i <row; i++){
        for (int j = 0; j <col; j++){
            if(A[i][j] == 0){
                r.insert(i);
                c.insert(j);
            }
        }
    }

    for(auto it : r){
        for(int i = 0; i < col; i++){
            A[it][i] = 0;
        }

        
    }

    for(auto it : c){
        for(int j = 0; j < row; j++){
            A[j][it] = 0;
        }
    }
}