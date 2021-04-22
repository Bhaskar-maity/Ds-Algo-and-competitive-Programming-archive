

//https://www.interviewbit.com/problems/largest-rectangle-in-histogram/
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

vector<int> nearest_smaller_to_left(int a[], int n){
    vector<int> left;
    stack<pair<int,int> > s;
    int pseudoIdx = -1;
    for(int i = 0; i < n; i++){
        if(s.size()==0){
            left.push_back(pseudoIdx);

        }

        else if(s.size() > 0 && a[i]>s.top().first){
            left.push_back(s.top().second);
        }

        else if(s.size() > 0 && a[i]<=s.top().first){
            while(s.size() > 0 && a[i]<=s.top().first)
                s.pop();

            if(s.size()==0){
                left.push_back(pseudoIdx);

            }

            else {
                left.push_back(s.top().second);
            }
        }

        s.push({a[i],i});
    }

    return left;
}

vector<int> nearest_smaller_to_right(int a[], int n){
    vector<int> right;
    stack<pair<int,int> > s;
    int pseudoIdx = n;
    for(int i = n-1; i >=0; i--){
        if(s.size()==0){
            right.push_back(pseudoIdx);

        }

        else if(s.size() > 0 && a[i]>s.top().first){
            right.push_back(s.top().second);
        }

        else if(s.size() > 0 && a[i]<=s.top().first){
            while(s.size() > 0 && a[i]<=s.top().first)
                s.pop();

            if(s.size()==0){
                right.push_back(pseudoIdx);

            }

            else {
                right.push_back(s.top().second);
            }
        }

        s.push({a[i],i});
    }

    reverse(right.begin(), right.end());

    return right;
}


int Maximum_Area_Histogram(int arr[], int n){
    vector<int> left, right, area;

    left = nearest_smaller_to_left(arr, n);
    right = nearest_smaller_to_right(arr, n);
    int mx=0;
    for(int i =0; i < n; i++){
        mx = max(mx,(right[i] - left[i] -1) * arr[i]);
        //area[i] = (right[i] - left[i] -1) * arr[i];
    }
    
    return mx;

}

int main() 
{ 
    int price[] = { 2, 30, 15, 10, 8, 25, 80 }; 
    
    int n = sizeof(price) / sizeof(price[0]); 
    printArray(price, n);
    
    int mx = Maximum_Area_Histogram(price,n);
    cout << "Max area histogram = " << mx << endl;
     
    


    return 0;
}