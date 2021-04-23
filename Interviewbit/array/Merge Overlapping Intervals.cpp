// https://www.interviewbit.com/problems/merge-overlapping-intervals/
// Given a collection of intervals, merge all overlapping intervals.

// For example:

// Given [1,3],[2,6],[8,10],[15,18],

// return [1,6],[8,10],[15,18].

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare (Interval a , Interval b)
{
    return a.start < b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> ans;
    sort(A.begin(), A.end() , compare);
    for(int i =0; i< A.size();i++)
    {
        auto curr = A[i];
        while(i+1 < A.size() && A[i+1].start <= curr.end)
        {
            i++;
            curr.end = max(curr.end,A[i].end);
        }
        ans.push_back(curr);
    }
    return ans;
    }
