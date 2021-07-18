// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
// Input:
// N = 5
// arr[] = {1,2,3,-2,5}
// Output:
// 9
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.
// https://www.youtube.com/watch?v=HCL4_bOd3-4

int Kadane(int a[], int n){
    
     int currsum = 0;
     //if all elements are negative that's why INT_MIN
    int maxsum = INT_MIN;
    
    for(int i=0;i<n;i++){
        
            currsum += a[i];

            
        if( currsum > maxsum) maxsum =  currsum;

        if(currsum < 0)
            currsum = 0;

    }
    return maxsum;

    
}