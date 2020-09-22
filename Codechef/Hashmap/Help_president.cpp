#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	long long n,t,id;
	char x,y;
    
	cin>>t;
	for (int i = 0; i < t; i++) {
	    cin>>n;
	    long long letter[26]={0};
	    unordered_map<int,char> xx;//asked
	    //vector<char>l(n);
	    for (int j = 0; j < n; j++) {
	        cin>>id>>x>>y;//id,asked,given
	        xx[id]=x;
	        //l[id]=x;
	        letter[y-'A']++;//given
	    }
	    vector<long long> p;
	   for (int k = 0; k < n; k++) {
	       auto ans= xx[k];//l[k];
	       if(letter[ans-'A'] > 0)
	           letter[ans-'A']--;//asked
	       else
	           p.push_back(k);
	   }
	   
	   if(p.size()==0){
	       cout<<"YES"<<endl;
	   }else{
	       cout<<p.size()<<endl;
	       for(long long o: p){
	           cout<<o<<" ";
	       }
	       cout<<endl;
	   }
	}
}
