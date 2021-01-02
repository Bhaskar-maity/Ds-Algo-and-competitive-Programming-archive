// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
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


void buildHeap(int arr[], int n)  { 
    
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>0; i--){ 
		
		swap(arr[0], arr[i]); 

		
		heapify(arr, i, 0); 
	} 

}

int kthSmallest(int arr[], int l, int r, int k) {
    buildHeap(arr, r+1);
    return arr[k-1];
    
}