// https://www.interviewbit.com/problems/meeting-rooms/
// Problem Description

// Given an 2D integer array A of size N x 2 denoting time intervals of different meetings.

// Where:

// A[i][0] = start time of the ith meeting.
// A[i][1] = end time of the ith meeting.
// Find the minimum number of conference rooms required so that all meetings can be done.


//my approach
int Solution::solve(vector<vector<int> > &A) {
    //sorting by inside vector start times
    sort(A.begin(), A.end());
    //min heap for end times
    priority_queue<int, vector<int>, greater<int> > mnhp;
    //pushing times
    mnhp.push(A[0][1]);

    for(int i=1; i<A.size(); i++){
        if(A[i][0] >= mnhp.top()){
            mnhp.pop();
        }
        mnhp.push(A[i][1]);
    }
    return mnhp.size();
}

//good for understanding
int Solution::solve(vector<vector<int> > &time) {
     sort(time.begin(),time.end());
    //now our interval are sorted based on start time
    //since we have to count the number of rooms required
    //we may use minHeap for this
    priority_queue<int,vector<int>,greater<int>> minHeap;
    //now push the first end time in the heap and iterate for rest
    //edge case
    if(time.size() == 0)
        return 0;
    minHeap.push(time[0][1]);
    for(int i = 1; i < time.size(); i++) {
        //check if the end time is smaller or equal then the current start time
        //the we can pop the heap and the current's end time
        if(time[i][0] >= minHeap.top()) {
            minHeap.pop();
        }
        minHeap.push(time[i][1]);
    }
    //now our required rooms will be heap size
return minHeap.size();
}