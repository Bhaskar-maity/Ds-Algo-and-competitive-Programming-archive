// https://www.interviewbit.com/problems/interview-questions/
// Input 2: 
//     A = [0 1 0 1]

// Output 2:
//     4

// Explanation 2:
// 	press switch 0 : [1 0 1 0]
// 	press switch 1 : [1 1 0 1]
// 	press switch 2 : [1 1 1 0]
// 	press switch 3 : [1 1 1 1]

int Solution::bulbs(vector<int> &A) {
    int ans=0, flg=0;

    for(auto it: A) {
        if(it^flg == 0){
            ans++,
    
            //toggle flag
            flg=!flg;
        } 
    }

    return ans;
}