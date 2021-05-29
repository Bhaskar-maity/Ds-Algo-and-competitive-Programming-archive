// https://www.interviewbit.com/problems/add-binary-strings/
// https://www.youtube.com/watch?v=ZUt8L8cbbBI
// Example:

// a = "100"

// b = "11"
// Return a + b = “111”.



// 1 1
// 1 1
// 110
//  2 -> 10
//  digit
//  2%2 = 0
//  carry
//  2/2 = 1

//  11

string Solution::addBinary(string A, string B) {
    string res;
    int i=A.size()-1, j=B.size()-1;
    int sum, carry =0;
    while(i>=0 || j>=0) {
        sum = carry;
        if(i>=0){
            // ascii value of 1 = 31, 0=30
            sum += (A[i] - '0');
        }
        if(j>=0){
            sum += (B[j] - '0');
        }

        res += to_string(sum%2);
        carry= (sum/2);
        i--; j--;
    }
    if(carry != 0){
        res +='1';
    }
    reverse(res.begin(), res.end());
    
    return res;


}

