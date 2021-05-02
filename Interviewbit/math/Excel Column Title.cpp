// // 28
// // 28%26 = 2 [B]
//  28/26 =1
// // 1%26 = 1 [A]
// 1/26 = 0

// // reverse(BA)

string Solution::convertToTitle(int A) {
    string ans ="";
    while (A > 0){
        //A- 1 cause A%26 canbe 0, in that case z should be pushed
        int tmp = (A -1)% 26;
        A = (A -1)/ 26;

        //int to char convert
        char c = (char)('A' + tmp );
        ans+= c;
    }

    reverse(ans.begin(), ans.end());

    return ans;

}

