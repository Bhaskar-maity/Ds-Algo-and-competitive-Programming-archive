//https://www.interviewbit.com/problems/hotel-bookings-possible/
// Problem Description

// A hotel manager has to process N advance bookings of rooms for the next season. His hotel has C rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand. Write a program that solves this problem in time O(N log N) .
// Example Input
// Input 1:

//  A = [1, 3, 5]
//  B = [2, 6, 8]
//  C = 1


// Example Output
// Output 1:

//  0
// time - o(nlogn)
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int n=arrive.size();

    //check kth arrive element(kth arrive date)
    for(int i=K; i<n; i++){
        //if depart's 1st element (after sorted) > kth arrive element then return false
        if(arrive[i] < depart[i-K]){
            return false;
        }
            
    }
 
    return true;
}