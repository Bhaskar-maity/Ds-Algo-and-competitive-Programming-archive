class Solution{   
public:
//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
//o(n) solution
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