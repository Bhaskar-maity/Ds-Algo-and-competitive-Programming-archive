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
// time - o(nlogn), space-o(1)
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

//also using map this
//https://www.youtube.com/watch?v=1i-cYKfwrNY
// time - o(nlogn), space-o(n)
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
      map<int,int> m;
      //in map arrive +1, depart -1
      for(auto&i:arrive) m[i]++;
      for(auto&i:depart) m[i]--;
      int count = 0;
      for(auto&i:m){
          count+=i.second;
          if(count<0 || count>K) return false;
      }
      return true;
  }