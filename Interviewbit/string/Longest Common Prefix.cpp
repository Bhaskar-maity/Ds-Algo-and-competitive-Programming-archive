// https://www.interviewbit.com/problems/longest-common-prefix/

// Input 2:
//     A = ["abab", "ab", "abcd"];
// Output 2:
//     "ab"
//     Explanation 2:
//         Longest common prefix of all the strings is "ab".

string Solution::longestCommonPrefix(vector<string> &A) {
    if (A.size() == 0) return "";

    string ans = A[0];

    for(int i = 1; i < A.size(); i++){
        int size = min(ans.size(), A[i].size());
        while(ans.substr(0, size) != A[i].substr(0, size)){
            size--;
        }
        if(size<0) return "";
        ans = ans.substr(0,size);
    }
    
    return ans;
}
