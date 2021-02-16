//https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

// Input: nums[] = [1, 2, 3, 3], sum = 6
// Output: 3
// All the possible subsets are {1, 2, 3},
// {1, 2, 3} and {3, 3}

class Solution {
public:
    int numSubseq(vector<int>& nums, int sum) {
        int n=nums.size();
        int t[n+1][sum+1];

        for(int i=0; i<n+1; i++){
            t[i][0]=1;
        }

        for(int j=1; j< sum+1; j++){
            t[0][j] = 0;
        }

        for(int i=1; i< n+1; i++){
            for(int j=1; j< sum+1; j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j - sums[i-1]] + t[i-1][j];
                }

                else
                    t[i][j] = t[i-1][j];
            }
        }

        return t[n][sum];
    }
};