// using minheap(minimum element on top of heap)
// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

//logic = insr all element in minheap then pop a,b element and sum them to ans, then push the new rope length(a+b) to minheap
class Solution
{
    //Function to return the minimum cost of connecting the ropes.
    long minCost(long arr[], int n) 
    {
        PriorityQueue<Long> pq = new PriorityQueue<Long>();
        long  ans=0;
        for(long i:arr){
            pq.add(i);
        }

        while(pq.size() != 1){
            long a=pq.poll();
            long b=pq.poll();

            ans+=a+b;
            pq.add(a+b);
        }

        return ans;
    }
}