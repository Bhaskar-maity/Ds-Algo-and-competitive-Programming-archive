//https://www.interviewbit.com/problems/maximum-consecutive-gap/
// Input : [1, 10, 5]
// Output : 5 
// time-o(nlogn) , space - o(n)

int Solution::maximumGap(const vector<int> &A) {
    if(A.size()<2) return 0;
    priority_queue<int,vector<int>, greater<int>>pq;
    for(int i : A)
        pq.push(i);
    int mx =INT_MIN;
    int first = pq.top(); pq.pop();
    while(!pq.empty())
    {
        int second = pq.top(); pq.pop();
        mx = max(mx, second-first);
        first = second;
    }
    return mx;    
}