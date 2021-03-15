// https://leetcode.com/problems/count-of-matches-in-tournament/
// Input: n = 7
// Output: 6
// Explanation: Details of the tournament: 
// - 1st Round: Teams = 7, Matches = 3, and 4 teams advance.
// - 2nd Round: Teams = 4, Matches = 2, and 2 teams advance.
// - 3rd Round: Teams = 2, Matches = 1, and 1 team is declared the winner.
// Total number of matches = 3 + 2 + 1 = 6.

//o(log n) solution
class Solution {
public:
    int cnt=0;
    
    int numberOfMatches(int n) {
       
        while (n > 1) {
            cnt += n / 2;
            n = (n + 1) / 2;
        }
        return cnt;
    }
};