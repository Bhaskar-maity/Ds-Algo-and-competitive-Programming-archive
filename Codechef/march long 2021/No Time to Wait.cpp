//https://www.codechef.com/viewsolution/43496519

#include<bits/stdc++.h>
 



#define fr(i, a, n) for(int i = a ; i < n ; i++)


#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);


using namespace std;


int main()
{
    int n,x,h,flag=0;
    cin>>n>>h>>x;
    int t[n];
    
    fr(i,0,n){
        cin>>t[i];
        
        if(t[i]+x >= h){
            flag=1;
            
            break;
        }
    }
    
    if(flag == 1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
