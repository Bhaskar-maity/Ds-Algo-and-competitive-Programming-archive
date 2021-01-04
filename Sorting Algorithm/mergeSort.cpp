#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to sort an array using merge sort*/
void merge(int a[], int l, int m, int u){
    int b[u-l+1];
    int i=l,j=m+1,k=0;

    while (i<=m && j<=u)
    {
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
        
    }

    if(i>m){
        while (j<u)
        {
            b[k]=a[j];
            j++;
            k++;
        }
        
    }
    else
    {
        while (i<m+1)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    
    for (int i = l; i <= u; i++)
    {
        a[i]=b[i];
    }
    
    
}

 void mergesort(int a[], int l, int u) {
     int m;
     while (l<u)
     {
         m=(l+u)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,u);
        merge(a, l, m, u);
     }
     
 }

  
// A utility function to print an array of size n  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int main()  
{  
    int arr[] = { 12, 11, 13, 5, 6, 88, 2 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    mergesort(arr, 0, n-1);  
    printArray(arr, n);  
  
    return 0;  
}  