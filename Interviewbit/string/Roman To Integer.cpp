// https://www.interviewbit.com/problems/roman-to-integer/
// Input 1:
//     A = "XIV"
// Output 1:
//     14

// Input 2:
//     A = "XX"
// Output 2:
//     20
//     https://www.youtube.com/watch?v=hEhf_oz3wsM

// I = 1
// V = 5
// L = 50
// C = 100
// D = 500
// M = 1000
// ccciv
// MDCCC IV
// if curr(V here) > prev (I here) , sum - 2* prev [as prev added once prior so we have to - twice]
int Solution::romanToInt(string A) {
    int res=0;
    unordered_map<char,int> rNo = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    
    res+=rNo[A[0]];
    for(int i=1; i<A.size(); i++) {
        if(rNo[A[i]] > rNo[A[i-1]]){
            
            res = res - 2*rNo[A[i-1]];
            
        }
        
        res+=rNo[A[i]];
    }
    return res;
}
