//https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1#
// Input:
// N = 4, K = 2
// Arr = [100, 200, 300, 400]
// Output:
// 700
// Explanation:
// Arr3  + Arr4 =700,
// which is maximum.

class Solution{
public:
//sliding window technique
    int maximumSumSubarray(int k, vector<int> &Arr , int n){
        int i=0,j=0;
        int sum=0;
        int mx=0;
            while(j<n){
                sum+=Arr[j];
                
                if(j-i+1 <  k){
                    
                    j++;
                }
                else if(j-i+1 == k){
                    
                    mx= max(sum,mx);
                    sum-=Arr[i];
                    i++; j++;

                }
            }
            return mx;
    }
};