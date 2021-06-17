class Solution{   
public:
//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
//o(n) solution
// Input:
// N = 4, K = 6
// arr[] = {1, 5, 7, 1}
// Output: 2
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.
    int getPairsCount(int a[], int n, int k) {
        int cnt=0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) {
            if(m.find(k - a[i]) != m.end()){
            cnt+= m[k - a[i]];
            }
            m[a[i]]++;
        }
        return cnt;
        
    }
};