// https://www.interviewbit.com/problems/rain-water-trapped/
// Given an integer array A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
//time - o(n) space-o(n)

public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int trap(final int[] A) {
        //maxLeft, maxRight array
        int n = A.length;
        
        int[] ml = new int[n];
        int[] mr = new int[n];

        //for maxLeft
        ml[0] = A[0];
        for (int i = 1; i < n; i++){
            ml[i] = Math.max(A[i], ml[i - 1]);
        }

        //for maxRight
        mr[n-1] = A[n-1];
        for (int i = n-2; i >=0; i--){
            mr[i] = Math.max(A[i], mr[i + 1]);
        }
        
        int trappedWater=0;
        for(int i =0; i<n; i++){
            trappedWater += (Math.min(ml[i], mr[i]) - A[i]);
        }

        return trappedWater;
    }
}