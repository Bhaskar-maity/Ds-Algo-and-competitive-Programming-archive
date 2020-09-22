

#include <iostream>

#define ll long long int
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define dif(a,b) (a>b?a-b:b-a)

using namespace std;


int main()
{
    ll t;
    cin>>t;
    
    while(t--){
       pair <ll, ll > p;
       cin>>p.first>>p.second;
       
     
           ll d = dif(p.first , p.second);
           //if diffence = 0
           if(d == 0) cout<<0<<endl;
           //if diffence / 10 ==0
           else if (d % 10 == 0) cout<<(d / 10)<<endl; 
           //else
           else cout << (d / 10) + 1 <<endl;
           
       
    }

    return 0;
}
