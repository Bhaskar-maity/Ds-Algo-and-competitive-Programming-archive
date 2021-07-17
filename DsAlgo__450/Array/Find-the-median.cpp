// https://www.geeksforgeeks.org/median/

// Input  : {1, 3, 4, 2, 6, 5, 8, 7}
// Output : Median = 4.5

// Since number of elements are even, median
// is average of 4th and 5th largest elements.
// which means (4 + 5)/2 = 4.5

// Input  : {4, 4, 4, 4, 4}
// Output : Median = 4   

int find_median(vector<int> v)
{
    int n=v.size();
    sort(v.begin(),v.end());
    
    if(n%2==0){
        return (v[(n/2)-1]+v[n/2])/2;
    }
    else{
        return v[n/2];
    }
}

