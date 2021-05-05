
//brute force aproach 
//time - o(n* m log(n*m))
// space -o(n*m)
int Solution::findMedian(vector<vector<int> > &matrix)
{
vector<int> temp;

    int c = matrix.size();
    int r = matrix[0].size();
    
     for(int i=0; i<c; i++)
     {
         for(int j=0; j<r; j++)
         {
             temp.push_back(matrix[i][j]);
         }
     }
     
     sort(temp.begin(), temp.end());
     
     int answer=0, median=0;
     
     median=temp.size()/2; 
     answer=temp[median];
     
     return answer;
}