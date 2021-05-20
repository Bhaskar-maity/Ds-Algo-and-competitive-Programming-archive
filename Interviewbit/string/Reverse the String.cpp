// https://www.interviewbit.com/problems/reverse-the-string/
// Input 1:
//     A = "the sky is blue"
// Output 1:
//     "blue is sky the"

// Input 2:
//     A = "this is ib"
// Output 2:
//     "ib is this"

//solution is ok, interviewbit test case are wrong
string Solution::solve(string A) {
    int i=A.size()-1;
    if(i==1) return A;
    string ans("");

    //i<=0
    while(i>=0){
        string tmp("");
        //for ignoring space
        while(i>=0 && A[i] == ' ') i--;
        //for non space charecters
        while(i>=0 && A[i] != ' '){
            tmp.push_back(A[i]);
            i--;
        }
        //reverse temp and add to ans with space
        reverse(tmp.begin(), tmp.end());
        ans+=(tmp+' ');
    }
    
    //lastly remove the last space 
    int sz=ans.size();
    if(sz>1){
        //ans.resize(sz-1);
        return ans.substr(0,sz-1);
    }
    else return "";

}

