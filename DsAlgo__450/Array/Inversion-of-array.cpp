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
