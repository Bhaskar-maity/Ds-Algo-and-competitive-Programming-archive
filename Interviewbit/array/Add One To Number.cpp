//https://www.interviewbit.com/problems/add-one-to-number/
// Example:

// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.

vector<int> Solution::plusOne(vector<int> &a) {
    //vector<int> ans;
    
    while(a.size()!=1 && a[0]==0){
        a.erase(a.begin());
    }
    if(a.size()==1 && a[0]==0){
        a[0]=1;
        return a;
    }
    //carry
    int c=1;
    for(int i=a.size() -1; i>=0; i--){
        int tmp=a[i]+c;
        a[i] = tmp % 10;
        c=tmp/10;
        
    }
    //it happen when array's elements are all 999999
    if(c==1){
        a.insert(a.begin(),1);
    }
    
    return a;
}
