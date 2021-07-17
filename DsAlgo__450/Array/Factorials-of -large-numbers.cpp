//https://practice.geeksforgeeks.org/problems/factorials-of-large-carrybers/0

// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int q=2;
    int arr[100000] = {0};
    arr[0] = 1;
    int len = 1;
    int idx = 0;
    int carry = 0;
    while(q<=n)
    {
        idx=0;
        carry =0;
        while(idx<len)
        {
            arr[idx] = arr[idx] *q;
            arr[idx] = arr[idx]+carry;
            carry = arr[idx]/10;
            arr[idx] = arr[idx]%10;
            idx++;
        }
        while(carry!=0)
        {
            arr[len] = carry%10;
            carry = carry/10;
            len++;
        }
        q++;
    }
    len--;
    while(len>=0)
    {
        cout<<arr[len];
        len = len-1;
    }
}