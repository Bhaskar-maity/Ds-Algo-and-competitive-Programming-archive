//User function Template for Java

class Solution{
    
   
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr (int A[], int N, int K) {
        int i=0,j=0, sum=0;
        int mx=Integer.MIN_VALUE;
        while(j<N){
            sum+=A[j];

            if(sum < K){
                j++;
            }
            else if(sum == K){
                mx=Math.max(mx, j-i+1);
                j++;
            }
            else if(sum > K){
                while(sum>K){
                    sum-=A[i];
                    i++;
                }
                j++;
            }
        }

        return mx;
    }
    
    
}