int Solution::solve(string A) {
    int n=A.size(), cnt=0;
    int i=0, j=n-1;
    if(n==0) return 0;
    while(i<=j){
        if(A[i]!=A[j]){
            //if i still in 1st position
            if(i ==0) {
                cnt++;
                j--;
            }
            //we have to insert in beginning so i=0, even if when i>0
            else {
                //cause when we A[i]=A[j], then that cnt i we have to add, cause now A[i]!=A[j]
                cnt+=i;
            }
            if(cnt>1) {
                 return 0;
                 break;
            }
               
            
        }
        else {
            i++; j--;
        }
    }

    return 1;
}
