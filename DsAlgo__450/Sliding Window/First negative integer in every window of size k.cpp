//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k/0#

/*
Input:
2
5
-8 2 3 -6 10
2
8
12 -1 -7 8 -15 30 16 28
3

Output:
-8 0 -6 -6
-1 -1 -7 -15 -15 0
*/

/*--------------------------------
sliding window technique

 in sliding window we basically start i,j from 0, then check gap btw of i,j(j-i+1) is < window size(k), j++)

and if j-i+1 == window size(k) then i++,j++ to put the gap of window size(k) and done some operations mentained in question
------------------------------- */

#include<bits/stdc++.h>
using namespace std;
int main()
 {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int T;
	cin >> T;
	while(T--)
	{
	  int n,k;
	  cin >> n;
	  int arr[n];
	  queue <int> neg;
	  for(int i = 0; i < n; ++i)
	      cin >> arr[i];
	  cin >> k;
	  
            int i=0,j=0;

            //---sliding window
            while(j<n){
                //pushing negetive
                if(arr[j]<0){
                    neg.push(arr[j]);
                }
                
                if(j-i+1 <  k){
                    
                    j++;
                }
                else if(j-i+1 == k){
                    if(neg.size() != 0){
                        cout<<neg.front()<<" ";
                    }
                    else
                        cout<<"0 ";
                    
                    if(arr[i]==neg.front()){
                        neg.pop();
                    }

                    i++; j++;

                }
            }
            //-------------
            cout <<endl;
	}
	return 0;
}