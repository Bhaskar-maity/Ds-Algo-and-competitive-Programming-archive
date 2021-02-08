

int rain_water_trapping(int a[], int n){
    int ml[n],mr[n], water=0;

    ml[0] = a[0];
    for(int i=1; i<n; i++){
        ml[i]= max(ml[i-1],a[i]);
    }

    mr[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--){
        mr[i]= max(mr[i+1],a[i]);
    }

    for (int i =0; i < n; i++){
        water += (min(ml[i],mr[i]) - a[i]);
    }

    return water;