#include <iostream> 

using namespace std;  
void swap(int*, int*);
void printArray(int*, int);

//partition
int partition(int arr[], int l, int h) {
	int p = arr[h];
	//partion index
	int pi = l;
	for(int j=l; j<=h; j++){
		if(arr[j] < p){
			swap(&arr[pi], &arr[j]);
			pi++;
		}
	}
	swap(&arr[pi], &arr[h]);
	return pi;
}


//quick sort
void quickSort(int arr[], int l, int h){
	if(l < h) {
		int partionIndex = partition(arr,l, h);
		quickSort(arr,l, partionIndex - 1);
		quickSort(arr, partionIndex + 1, h);
	}
}


//main func
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
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
