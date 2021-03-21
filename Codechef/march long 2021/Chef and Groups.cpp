
//https://www.codechef.com/MARCH21C/problems/GROUPS/

#include<bits/stdc++.h>
#include <string>
#define fr(i, a, n) for(int i = a ; i < n ; i++)

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);


using namespace std;


int main()
{
FAST ;
    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        string s;
        cin>>s;
        
        int n=s.length();

        if(s[0]=='1'){
            cnt++;
        }
        fr(i,1,n){
            
            if(s[i] == '1' && s[i-1]!='1'){
                cnt++;
            }
            
            
        }
        
        
        
            
        cout<<cnt<<endl;
    }
    
    

    return 0;
}
