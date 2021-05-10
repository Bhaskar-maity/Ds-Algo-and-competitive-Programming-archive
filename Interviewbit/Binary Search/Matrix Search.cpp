// https://www.interviewbit.com/problems/matrix-search/
// Input 1:
//     A = 
//     [ [1,   3,  5,  7],
//       [10, 11, 16, 20],
//       [23, 30, 34, 50]  ]
//     B = 3
// Output 1:
//     1


int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int r = A.size();
    int c = A[0].size();

    int low=0, high=r*c - 1, mid;

    while (low<=high){
        mid = (low+high)/2;
        
        //here main things that, 
        //if we have find row & column no from total range, then we have 
        //row = mid / column not
        //column = mid % column no
        if(A[mid/c][mid%c] == B) return 1;

        else if(A[mid/c][mid%c] < B)
            low = mid+1;
        else high = mid-1;
    }

    return 0;
}
