//https://www.interviewbit.com/problems/maximum-consecutive-gap/
// Input : [1, 10, 5]
// Output : 5 
// time-o(nlogn) , space - o(n)
//https://github.com/prakashshuklahub/Interview-Questions/blob/master/164%20Maximum%20Gap

// int Solution::maximumGap(const vector<int> &A) {
//     if(A.size()<2) return 0;
//     priority_queue<int,vector<int>, greater<int>>pq;
//     for(int i : A)
//         pq.push(i);
//     int mx =INT_MIN;
//     int first = pq.top(); pq.pop();
//     while(!pq.empty())
//     {
//         int second = pq.top(); pq.pop();
//         mx = max(mx, second-first);
//         first = second;
//     }
//     return mx;    
// }

// time-o(n) , space - o(n)
int Solution::maximumGap(const vector<int> &A) {
    if(A.size()<2) return 0;
    int mn=A[0], mx=0;
    for(auto i: A)  {
        mn=min(i,mn);
        mx=max(i,mx);
    }
    int interval= ceil((mn + mx + 0.0) / A.size());

    vector<int> bucketMin(A.size()-1,INT_MAX);
    vector<int> bucketMax(A.size()-1,-1);

    
    for(int i=0;i<A.size();i++){
        if(A[i] == mn || A[i] == mx) continue;

        int index = (A[i] - mn)/interval;

        bucketMin[index] = min(bucketMin[index],A[i]);
        bucketMax[index]= max(bucketMax[index],A[i]);
    }

    int prev = mn;
    int maxgap = 0;
    for(int i=0; i< bucketMin.size();i++){
        if(bucketMax[i] == -1) continue;
        maxgap =max(bucketMin[i]-prev,maxgap);
        prev= bucketMax[i];
    }

    maxgap =max(mx-prev,maxgap);

    return maxgap;

}

//java
public class Solution {
    public ArrayList<ArrayList<Integer>> generateMatrix(int A) {
        int arr[][] = new int [A][A];
        // marking boundaries
        int top=0, bottom=A-1, left=0, right=A-1;
        int direction = 0, count = 1;
        
        while(left<=right && top<=bottom) {
            if(direction==0) {
                for(int i=left; i<=right; i++) {
                    arr[top][i] = count;
                    count++;
                }
                top++;
                direction = 1;
            } else if(direction==1) {
                for(int i=top; i<=bottom; i++) {
                    arr[i][right] = count;
                    count++;
                }
                right--;
                direction = 2;
            } else if(direction==2) {
                for(int i=right; i>=left; i--) {
                    arr[bottom][i] = count;
                    count++;
                }
                bottom--;
                direction = 3;
            } else if(direction==3) {
                for(int i=bottom; i>=top; i--) {
                    arr[i][left] = count;
                    count++;
                }
                left++;
                direction = 0;
            } 
        }
        
        // converting spiral array into list of list.
        ArrayList<ArrayList<Integer>> finalList = new ArrayList();
        for(int i=0;i<A;i++) {
            ArrayList<Integer> list = new ArrayList();
            for(int j=0;j<A;j++) {
                list.add(arr[i][j]);
            }
            finalList.add(list);
        }
        
        return finalList;
    }
}

