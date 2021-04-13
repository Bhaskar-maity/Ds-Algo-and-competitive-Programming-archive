// https://www.interviewbit.com/problems/spiral-order-matrix-ii/
// Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order
// Input 1:
//     A = 3

// Output 1:
//     [   [ 1, 2, 3 ],
//         [ 8, 9, 4 ],
//         [ 7, 6, 5 ]   ]

vector<vector<int> > Solution::generateMatrix(int A) {
    if(A==0)
    {
        return vector<vector<int> >({{}});
    }
    if(A==1)
    {
        return vector<vector<int> >({{1}});
    }
    int left=0,right=A-1;
    int top=0,bottom=A-1, dir=1;

    vector<vector<int> > grid(A,vector<int>(A,0));
    int num=1;
    while(top<=bottom && left<=right)
    {
        if(dir==1)
        {
            for(int j=left;j<=right;j++)
            {
                grid[top][j]=num;
                num++;
            }
            dir=2;
            top++;
        }
        if(dir==2)
        {
            for(int i=top;i<=bottom;i++)
            {
                grid[i][right]=num;
                num++;
            }
            dir=3;
            right--;
        }
        if(dir==3)
        {
            for(int j=right;j>=left;j--)
            {
                grid[bottom][j]=num;
                num++;
            }
            dir=4;
            bottom--;
        }
        if(dir==4)
        {
            for(int i=bottom;i>=top;i--)
            {
                grid[i][left]=num;
                num++;
            }
            dir=1;
            left++;
        }
}
return grid;
}