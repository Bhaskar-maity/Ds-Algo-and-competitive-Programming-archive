// https://www.interviewbit.com/problems/count-and-say/
// 1, 11, 21, 1211, 111221, ...
// 1 is read off as one 1 or 11.
// 11 is read off as two 1s or 21.

// 21 is read off as one 2, then one 1 or 1211.




// 111221 -> 312211


// s[j] = s[j-1] cnt++;

// else {
//     t+=cnt;
//     t+=s[j-1];
//     cnt=1;
// }

string Solution::countAndSay(int A) {
    if(A == 1) return "1";
    if(A == 2) return "11";

    string s="11";
    for(int i = 3; i <=A; i++) {
        s+='$';
        int cnt=1;
        string t="";
        for(int j = 1; j <s.length(); j++){
            if(s[j] != s[j-1]){
                t+=to_string(cnt++);
                t+=s[j-1];
                cnt=1;
            }
            else cnt++;
        }
        s=t;
    }

    return s;
}