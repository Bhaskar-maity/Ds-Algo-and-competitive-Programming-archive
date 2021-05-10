// https://www.interviewbit.com/problems/sorted-insert-position/
// Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
//  A = [1, 3, 5, 6]
// B = 5
// Output 1:

//  2


//1stbinary
 int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int low=0, high=A.size()-1;

    while (low<high) {
        int mid=(low+high)/2;
        if(A[mid] == B) return mid;
        
        if(A[mid] < B){
            low=mid+1;
        }
        
        else {
            high=mid;
        }
    }
    if(low==A.size()-1 && B!=A[0]){
      return (low+1);
        
    }
    else return low;
}

//2nd binary
int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int low=0, high=A.size()-1;
    int mid;
    
    while (low<=high) {
        mid=(low+high)/2;
        if(A[mid] == B) {return mid;}
        
        else if(A[mid] < B){
            low=mid+1;
        }
        
        else {
            high=mid-1;
        }
    }
    // if(low==A.size()-1 && B!=A[0]){
    //   return (low+1);
        
    // }
     return low;
}
