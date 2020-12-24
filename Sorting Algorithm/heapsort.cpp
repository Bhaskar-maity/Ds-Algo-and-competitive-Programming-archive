#include <iostream> 

using namespace std;  
void swap(int*, int*);
void printArray(int*, int);

void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int l= 2*i+1;
      int r= 2*i+2;
      if(l<n && (arr[largest]<arr[l])) largest=l;
      if(r<n && (arr[largest]<arr[r])) largest=r;
      
      if (largest != i) {
        swap(arr[i], arr[largest]);
      
        heapify(arr, n, largest);
      }

}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>0; i--){ 
		// Move current root to end 
		swap(arr[0], arr[i]); 

		// call max heapify on the reduced heap 
		heapify(arr, i, 0); 
	} 

}

//main func
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    buildHeap(arr, n);  
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



