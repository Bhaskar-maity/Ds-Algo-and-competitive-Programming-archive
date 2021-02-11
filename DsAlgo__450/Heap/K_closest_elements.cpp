// complexity o(nlogn + k)
// using maxheap(maximum element on top of the heap) , heapsize>k pop
// complexity o(nlogn + k)
// using maxheap(maximum element on top of the heap) , heapsize>k pop
// complexity o(nlogn + k)
// using maxheap(maximum element on top of the heap) , heapsize>k pop

#include <bits/stdc++.h> 
  
using namespace std;

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        priority_queue<pair<int,int> > mxhp;
        vector<int> ans;
        for(int i=0; i<n; i++){

            //pair first element = diffence  a[i] - x ,cause sorting by diffence
            //pair second element = a[i]
            mxhp.push({abs(arr[i]-x), arr[i]});

            if(mxhp.size()>k){
                mxhp.pop();
            }
        }

        // reverse putting
        for(int i=k-1; i>=0; i--){
            
            ans[i]=mxhp.top().second;
            mxhp.pop();
        }
        
        
        return ans;
    }
};


int main() 
{ 
    vector<int> a = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56}; 
    
    
    

    Solution ob;
    auto ans = ob.printKClosest(a,13,4,35);
    for(auto i: ans){
        cout << ans[i]<<" ";
    }
    return 0; 
} 