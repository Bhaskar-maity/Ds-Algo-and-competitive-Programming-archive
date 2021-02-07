bool find3Numbers(int a[], int n, int x)
{
    sort(a, a+n);

    bool ans=false;

    for(int i=0; i<n-2; i++){
        int l=i+1;
        int r=n-1;

        while(l<r){
            if(a[i]+a[l]+a[r] == x){
                ans=true;
                break;
            }
            else if(a[i]+a[l]+a[r] < x) 
                l++;
            else
                r--;

        }
        if(ans==true){
            
            break;
        } 
        
    }
    
    return ans;


}