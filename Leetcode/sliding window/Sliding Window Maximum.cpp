// https://leetcode.com/problems/sliding-window-maximum/submissions/

// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int i=0,j=0, mx=INT_MIN;
        int n=nums.size();
        deque<int> dq;

        //sliding window
        while (j<n){
            //max element in front of deque so that's why checking 
            //smaller elements are useless so pop from back if smaller found
            while (dq.size()>0 && dq.back()< nums[j]){
                dq.pop_back();
            }
            //add to rear of deque
            dq.push_back(nums[j]);

            
            if(j-i+1 <  k){
                    
                j++;
            }
            //window size check
            else if(j-i+1 == k){
                //max will be in front of deque, so push ans
                ans.push_back(dq.front());

                //if first element of window is the maximum, then pop cause window will be slided to the next shift, and that max will be unnecessary
                if(nums[i] == dq.front()){
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }

        return ans;

    }
};