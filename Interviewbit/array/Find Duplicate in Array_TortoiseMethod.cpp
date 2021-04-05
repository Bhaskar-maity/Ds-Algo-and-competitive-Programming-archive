//https://www.interviewbit.com/problems/find-duplicate-in-array/
// Sample Input:

// [3 4 1 4 1]
// Sample Output:

// 1
//time -o(n), space o(1)
//tortoise method
int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    if (n <= 1) return -1;
    int slow,fast;
    slow = A[0]; fast = A[0];

    do{
        slow =A[slow]; 
        fast = A[A[fast]];
    }while (slow != fast);
    fast=A[0];
    while(slow != fast) {
        slow =A[slow];
        fast = A[fast];
    }
    return slow;
}