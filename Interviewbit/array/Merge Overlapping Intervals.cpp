

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool pred(Interval a, Interval b){
        return a.start < b.start;

    }

vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    sort(A.begin(), A.end(), pred);
    for(int i = 1; i < A.size(); i++) {
        if(A[i-1].end > A[i].start){
            A[i-1].start = A[i].end;
            A.erase(A.begin() + i + 1);
        }
    }

    return A;
}
