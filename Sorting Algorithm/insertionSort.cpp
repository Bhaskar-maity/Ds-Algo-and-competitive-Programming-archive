#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)  
{  
    int i,j,temp;
    for ( i = 1; i < n; i++)
    {
        temp = arr[i];
        j=i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
        

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
  
    insertionSort(arr, n);  
    printArray(arr, n);  
  
    return 0;  
}  