// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0#
#include<bits/stdc++.h>
using namespace std;

bool sbd(const pair<int,int> &a ,const pair<int,int> &b )
{
    if(a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}

int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int ar[n];unordered_map<int,int>mp;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];mp[ar[i]]++;
	    }
	    
	    vector<pair<int,int>>v;
	    for(auto i=mp.begin();i!=mp.end();i++)
	    {
	        v.push_back(make_pair(i->first,i->second));
	    }
	    sort(v.begin(),v.end(),sbd);
	    
	    for(i=0;i<v.size();i++)
	    {
	        while(v[i].second) {cout<<v[i].first<<" ";v[i].second--;}
	    }
	    cout<<"\n";
	}
	return 0;
}


/* #include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

void function(int arr[],int n){
    //unordered_map
    unordered_map<int,int> m;
    //maxheap
    priority_queue< pair<int,int> > mxhp;
    for(int i = 0 ; i < n ; i++)
    m[arr[i]]+=1;

    //maxheap push
    for(auto i: m){
        mxhp.push(make_pair(m.second, m.first));
    }
    
    
    for(int i=0; i<n; i++){
        int freq=mxhp.top.first;
        int num=mxhp.top.second;

        for(int j; j<freq; j++){
            cout << num << " ";
        }
    }

    cout << endl;
}
int main()
 {
	//code
	int a,n;
	cin >> a;
	while(a--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++ )
	    cin >> arr[i];
	    function(arr,n);
	}
}
*/

