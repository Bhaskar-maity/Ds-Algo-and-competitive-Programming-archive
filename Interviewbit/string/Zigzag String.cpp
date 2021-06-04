string Solution::convert(string A, int B) {
    if(B==1){
        return A;
    }
    int size = A.size();
    std::string S;
    for(int i = 0; i<B; i++){
        for(int j=0;i+(2*B-2)*j<size;j++){
            S.push_back(A[i+(2*B-2)*j]);
            if(i>0 && i<B-1 && 2*B-2+(2*B-2)*j-i < size){
                S.push_back(A[2*B-2+(2*B-2)*j-i]);
            }
        }
    }
    return S;
}