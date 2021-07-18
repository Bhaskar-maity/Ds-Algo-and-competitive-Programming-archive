// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).

long long int Merge(long long arr[],long long low,long long mid,long long high){
    long long count=0;
    long long temparr[high-low+1];
    long long i,j,k;
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
           temparr[k]=arr[i];
           i++;
           k++;
        }
        else if(arr[i]>arr[j]){
            count++;
            temparr[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        count++;
        temparr[k]=arr[i];
           i++;
           k++;
    }
    while(j<=high){
        
        temparr[k]=arr[j];
            j++;
            k++;
    }
    for(i=low;i<=high;i++){
        arr[i]=temparr[i-low];
    }
    return count;
    
}
void MergerSort(long long arr[],long long low,long long high,long long &ans){
    if(low<high){
       
        long long mid=low+(high-low)/2;
        MergerSort(arr,low,mid,ans);
        MergerSort(arr,mid+1,high,ans);
        ans+=Merge(arr,low,mid,high);
    }
}

long long int inversionCount(long long arr[],long long n)
{
   ///////////////////////////////
   long long low=0;
   long long high=n-1;
    long long ans=0;
   MergerSort(arr,low,high,ans);
   return ans;
}
