int Kadane(int a[], int n){
    
    int csum = a[0];
    int osum = a[0];
    
    for(int i=1;i<n;i++){
        if(csum>=0) csum += a[i];
        else csum = a[i];
        
        if(csum > osum) osum = csum;
        
    }
    return osum;

    
}