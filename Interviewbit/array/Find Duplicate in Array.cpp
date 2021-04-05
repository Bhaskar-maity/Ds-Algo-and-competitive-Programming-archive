//https://www.interviewbit.com/problems/find-duplicate-in-array/
// Sample Input:

// [3 4 1 4 1]
// Sample Output:

// 1
//time -o(n), space o(n)
int Solution::repeatedNumber(const vector<int> &A) {
    bool a[A.size()] = {false};

    for(int i = 0; i < A.size(); i++){
        if(a[A[i]] == false){
            a[A[i]] = true;
        }
        else return A[i];
    }
    return -1;
}