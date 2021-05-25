// https://www.interviewbit.com/problems/valid-ip-addresses/
// Given “25525511135”,

// return [“255.255.11.135”, “255.255.111.35”]. (Make sure the returned strings are sorted in order)

//https://www.youtube.com/watch?v=7s6PsM2cqsM&t=598s
bool isvalid(string a){
    if(a.size()>3 && a.size()==0){
        return false;
    }
    if(a.size()>1){
        if(a[0]=='0'){
            return false;
        }
        else if(stoi(a) >0 && stoi(a) <=255){
            return true;
        }
        return false;
    }
    else{
        if(a[0]>= '0' && a[0]<='9'){
            return true;
        }
         return false;
    }
    return false;

}


vector<string> Solution::restoreIpAddresses(string s) {
    int n = s.size();
    if(n > 12 || n < 4){
        return vector<string>(0, "");
    }
    else{
        vector<string> ans;

        for(int i=1;i<n; i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    string first = s.substr(0,i);
                    string second = s.substr(i,j-i);
                    string third = s.substr(j,k-j);
                    string fourth = s.substr(k,n-k);

                    if(isvalid(first) && isvalid(second) && isvalid(third) && isvalid(fourth)){
                        string temp = first + '.'+ second + '.'+third+'.'+fourth;
                        ans.push_back(temp);
                    }

                }
            }
        }

        return ans;
    }
}
