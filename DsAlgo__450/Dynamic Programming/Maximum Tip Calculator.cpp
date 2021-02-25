//https://practice.geeksforgeeks.org/problems/maximum-tip-calculator/0/?company[]=Amazon&company[]=Amazon&problemType=full&page=1&sortBy=submissions&query=company[]AmazonproblemTypefullpage1sortBysubmissionscompany[]Amazon#

// Input:

// 2
// 5 3 3
// 1 2 3 4 5
// 5 4 3 2 1
// 8 4 4
// 1 4 3 2 7 5 9 6 
// 1 2 3 6 5 4 9 8

 

// Output:

// 21
// 43

//memoization
#include<bits/stdc++.h>
using namespace std;

//t[x+1][y+1]
int t[106][106];

int mxtip(int x, int y, int n, int a[], int b[]){
    //base case
    if(n<0) return 0;

    if(t[x][y] != -1){
        return t[x][y];
    }

    if(x>0 && y>0){
        return t[x][y] = max(a[n]+ mxtip(x-1, y, n-1, a, b), b[n] + mxtip(x, y-1, n-1, a, b));
    }

    else if(x>0){
        return t[x][y] = a[n]+ mxtip(x-1, y, n-1, a, b);
    }

    else if(y>0){
        return t[x][y] = b[n] + mxtip(x, y-1, n-1, a, b);
    }
}

int main() {
	int test;
	cin>>test;
	 int n,x,y;
	while(test--)
	{
	  cin>>n>>x>>y;
	  int a[n], b[n];
	  for(int i=0;i<n;++i) cin>>a[i];
	  for(int i=0;i<n;++i) cin>>b[i];
	  memset(t, -1, sizeof(t));
      cout<<mxtip(x,y,n-1,a,b)<<endl;	    
	}
	return 0;
}