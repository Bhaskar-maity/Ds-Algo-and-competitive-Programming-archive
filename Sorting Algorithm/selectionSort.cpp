#include <iostream> 

using namespace std;  
void swap(int*, int*);
void printArray(int*, int);

void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]) min =j;
            
        }
        if(min!=i) swap(&arr[i],&arr[min]);
    }
}


//main func
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
   selectionSort(arr,n);
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



