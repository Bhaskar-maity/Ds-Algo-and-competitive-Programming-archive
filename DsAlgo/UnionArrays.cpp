#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
//code
int t;
cin >>t;
while(t--){
int n,m;
unordered_set<int> s;
cin >> n>>m;
int arr1[n];
int arr2[m];
for(int i=0;i<n;i++){ cin>> arr1[i];
s.insert(arr1[i]);
}
for(int i=0;i<m;i++){ cin>> arr2[i];
s.insert(arr2[i]);
}
cout<<s.size()<<endl; 
    
} return 0; 
    
}