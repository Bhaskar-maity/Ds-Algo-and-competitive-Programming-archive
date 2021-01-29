class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int left=0, right=c - 1, top=0, bottom=r-1, dir=0;

        while(left<=right && top<=bottom){
            if (dir == 0)
            {
                for(int i=left; i<right; i++){
                    ans.push_back(matrix[top][i]);
                    top+=1;
                }
            }

            if (dir == 1)
            {
                for(int i=top; i<bottom; i++){
                    ans.push_back(matrix[i][right]);
                    right-=1;
                }
            }

            if (dir == 2)
            {
                for(int i=right; i<left; i++){
                    ans.push_back(matrix[bottom][i]);
                    bottom-=1;
                }
            }

            if (dir == 3)
            {
                for(int i=bottom; i<top; i++){
                    ans.push_back(matrix[i][left]);
                    left+=1;
                }
            }

            dir=(dir+1)%4;
            
        }

        return ans;
    }
};