// https://www.interviewbit.com/problems/search-for-a-range/
// Input 1:
//     A = [5, 7, 7, 8, 8, 10]
//     B = 8
// Output 1:
//     [3, 4]
// Explanation 1:
//     First occurence of 8 in A is at index 3
//     Second occurence of 8 in A is at index 4
//     ans = [3, 4]

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    //basic intialization for not found
    vector<int> ans{-1,-1};

    //binary search
    int low=0, high=A.size()-1;
    int mid;
    while (low <= high){
        mid=(low+high)/2;

        //if no found then actual things
        if(A[mid] == B){
            //we have to check the lower index where B found
            while(mid >= 0 && A[mid] == B){
                //decrecre to find lowest index
                mid--;
            }
            if(mid < 0)
                ans[0]=0;
            else
                ans[0]=mid+1;

            //for resote index
            mid++;


            //similarly we have to check the upper index where B found
            while(mid <= A.size()-1 && A[mid] == B){
                mid++;
            }

            if(mid > A.size()-1)
                ans[1]=A.size()-1;
            else
                ans[1]=mid-1;
            
            return ans;
        }

        else if(A[mid] > B){
            high=mid-1;
        }
        else low=mid+1;
    }

    return ans;
}
