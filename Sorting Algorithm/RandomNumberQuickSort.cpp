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
// random_number_generator function
int random_number_generate(){
    
    return (rand() );
}
//main func
int main()  
{  
    // declearing array of 1000 elements
    int arr[1000];  
    
    //generating 1000 numbers
    for(int i = 0; i<1000; i++){
        //storing random numbers in array
        arr[i]= random_number_generate();
    }
    
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
