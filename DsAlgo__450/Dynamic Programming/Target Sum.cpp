//https://leetcode.com/problems/target-sum/

// basically it is a  count of number of subsets with given diffrence problem little change
//s1, s2 = subsets
// s1 - s2 = diff(S)
// s1 + s2 = arrSum
//s1 = (diff + arrSum)/2

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int arrSum= 0;
        int n= nums.size();
        for(int i = 0; i < n ; i++){
            arrSum+= nums[i];
        }

        // 
        int s1 = (S + arrSum)/2;

        //tabulation matrix
        int t[n+1][s1+1];
        //initialization
        for(int i=0; i<n+1; i++){
            t[i][0]=1;
        }

        for(int j=1; j< s1+1; j++){
            t[0][j] = 0;
        }

        for(int i=1; i< n+1; i++){
            for(int j=1; j<s1+1; j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
                }

                else 
                    t[i][j] = t[i-1][j];
            }
        }

        return t[n][s1];
    }
};