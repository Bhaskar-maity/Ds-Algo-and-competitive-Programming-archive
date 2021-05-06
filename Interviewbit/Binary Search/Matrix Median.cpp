
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

// 1 2 3 
// 4 5 7
// 7 8 9
//binary approach
//time - o(n* log(m))
// space -o(1)
int Solution::findMedian(vector<vector<int> > &arr)
{
    //row
    int r=arr.size();
    //col
    int c=arr[0].size();

    //getting max, min of the array
    int mx=INT_MIN ,mn=INT_MAX;

    for(int i=0;i<r;i++){
        mn=min(mn, arr[i][0]);
        mx =max(mx, arr[i][c-1]);
    }

    int idx = ((r*c) + 1)/2;
    while(mn<mx){
        int mid = (mn + mx)/2;
        int cnt=0;

        for(int i=0; i<r; i++){
            cnt+= (upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin());
        }
        if(cnt < idx){
            mn = mid + 1;
        }
        else mx = mid;
    }
    return mn;
}