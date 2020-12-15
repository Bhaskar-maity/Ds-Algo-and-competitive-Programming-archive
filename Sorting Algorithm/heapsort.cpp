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

}