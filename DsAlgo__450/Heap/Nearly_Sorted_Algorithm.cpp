//time- o(nlogk) solution
//memory- o(n)
//i created minheap , no of elemnts in heap if greater than k then print and pop and lastly print all element in minheap
// https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0#

#include <iostream>
#include <queue>
using namespace std;

int main() {
	//code
    int t,n,k;
    cin>>t;

    while(t--){
        cin>>n>>k;
        int a[n];

        //minheap(min element on top)
        priority_queue <int, vector<int>, greater<int>> mnhp;

        for(int i=0; i<n; i++){
            cin>>a[i];
            mnhp.push(a[i]);

            if(mnhp.size()>k){
                cout<<mnhp.top()<<" ";
                mnhp.pop();
            }
        }

        while(!mnhp.empty()){
            cout<<mnhp.top()<<" ";
                mnhp.pop();
        }
        cout<<endl;
    }
	return 0;
}