#include <iostream> 

using namespace std;  
void swap(int*, int*);
void printArray(int*, int);

// ----------------------------------------------
void sort012(int a[], int n)
{
    int l=0,m=0,h=n-1;
    while (m<=h)
    {
        if (a[m]==0)
        {
            swap(&a[m],&a[l]);
            m++;
            l++;
        }
        else if (a[m]==1)
        {
            m++;
        }

        else 
        {
            swap(&a[m],&a[h]);
            h--;
        }
        
        
    }
    
}

// ------------------------------------------------

int main()  
{  
    int arr[] = {1,0,2,0,0,2,1,1,2};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    sort012(arr, n);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
} 