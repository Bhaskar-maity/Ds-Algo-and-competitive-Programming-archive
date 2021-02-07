//using stack o(n) solution


#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}


vector<int> nearest_smaller_to_lefth(int a[], int n){
    vector<int> v;
    stack<int> s;

    for(int i = 0; i < n; i++){
        if(s.size()==0){
            v.push_back(-1);

        }

        else if(s.size() > 0 && a[i]>s.top()){
            v.push_back(s.top());
        }

        else if(s.size() > 0 && a[i]<=s.top()){
            while(s.size() > 0 && a[i]<=s.top())
             s.pop();

            if(s.size()==0){
                v.push_back(-1);

            }

            else {
                v.push_back(s.top());
            }
        }

        s.push(a[i]);
    }

    return v;
}

int main() 
{ 
    int price[] = { 2, 30, 15, 10, 8, 25, 80 }; 
    
    int n = sizeof(price) / sizeof(price[0]); 
    printArray(price, n);
    cout << "nsnl = " ;
    vector<int> v;
    v = nearest_smaller_to_lefth(price, n); 
     
    

    for(int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
        
        		
	}

    return 0;
}