// https://www.interviewbit.com/problems/allocate-books/
// Input 1:
//     A = [12, 34, 67, 90]
//     B = 2
// Output 1:
//     113
// Explanation 1:
//     There are 2 number of students. Books can be distributed in following fashion : 
//         1) [12] and [34, 67, 90]
//         Max number of pages is allocated to student 2 with 34 + 67 + 90 = 191 pages
//         2) [12, 34] and [67, 90]
//         Max number of pages is allocated to student 2 with 67 + 90 = 157 pages 
//         3) [12, 34, 67] and [90]
//         Max number of pages is allocated to student 1 with 12 + 34 + 67 = 113 pages

//         Of the 3 cases, Option 3 has the minimum pages = 113.

//https://www.youtube.com/watch?v=2JSQIhPcHQg&t=2170s
//my code pass all test cases 
int Solution::books(vector<int> &A, int B) {
    //if no of students > A.size, return -1
    if (A.size() < B) return -1;

    //sum and max 
    int sum =0, mx=INT_MIN, result=-1;
    for(int i=0; i<A.size(); i++){
        sum += A[i];
        mx= max(mx, A[i]);
    }

    //low, high
    int lw=mx, hg = sum;
    while(lw<=hg){
        int mid = lw + (hg - lw)/2;
        //alt =alloted books to students, cnt= students count
        int alt=0, cnt=1;
        for(int i=0; i<A.size(); i++){
            alt+=A[i];
            
            if(alt>mid){
                cnt++;
                alt=A[i];
                
            }
            
        }

        //not students count > actual students B
        if(cnt>B){
            lw = mid+1;
        }
        else {
            result=mid;
            hg = mid-1;
        }
    }

    return result;
}
