// 1 4 5 7 8 9
// b = 7
// time - o(n)
// space -o(n)
//mapping 
int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    for(int i = 0; i < A.size(); i++){
        mp[A[i]]++;
    }

    for(int i = 0; i < A.size(); i++){
        if(mp[A[i] + B]){
            return 1;
        }

        
    }
    return 0;
}

// time - o(nlog n)
// space -o(1)

//A[i]+ b, check it in array binary search
int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    
    B = abs(B);
    for(int i= 0; i < A.size() - 1; i++){
        int temp = A[i] + B;
        int low=i+1;int high= A.size()-1;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(A[mid] == temp){
                return 1;
            }
            else if(A[mid] < temp){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    
    return 0;
}


// time - o(nlog n)
// space -o(1)
//2 pointer approach
int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    
    int m=0, n=1;
    while(m<A.size() && n<A.size()){
        int dif = A[n] - A[m];
        if(dif ==  B){
            return 1;
        }
        else if(dif < B){
            n++;
        }
        else {
            m++;
        }
    }
    
    return 0;
}