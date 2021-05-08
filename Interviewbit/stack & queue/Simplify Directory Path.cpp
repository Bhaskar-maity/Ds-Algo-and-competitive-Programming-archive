// https://www.youtube.com/watch?v=h1KVmq2oGhE
// https://www.interviewbit.com/problems/simplify-directory-path/
// Input 1:
//     A = "/home/"
// Output 1:
//     "/home"

// Input 2:
//     A = "/a/./b/../../c/"
// Output 2:
//     "/c"

string Solution::simplifyPath(string str) {
    vector<string> v;
    string ans="";
    for(int i = 0; i <str.size(); i++){
        string path="";
        while(i < str.size() && str[i] !='/') path+=str[i++];

        if(path=="..") {
            if(v.size()>0) v.pop_back();
        }
        

        else if(path=="" ||  path==".") continue;
        else v.push_back(path);
    }
    if(v.size() == 0) return "/";
    for(int i=0; i<v.size(); i++){
        ans+= '/' + v[i];
    }
    return ans;
}
