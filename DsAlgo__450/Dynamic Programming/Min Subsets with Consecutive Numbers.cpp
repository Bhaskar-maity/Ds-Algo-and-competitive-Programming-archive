//https://practice.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers0601/1


int numofsubset(int arr[], int n) 
{ 
    
    sort(arr, arr + n); 
  
    int count = 1; 
    for (int i = 0; i < n - 1; i++) { 
         
        if (arr[i] + 1 != arr[i + 1]) 
            count++; 
    } 
  
    return count; 
}