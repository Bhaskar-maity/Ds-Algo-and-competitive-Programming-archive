// https://www.interviewbit.com/problems/palindrome-string/
// "A man, a plan, a canal: Panama" is a palindrome.

// "race a car" is not a palindrome.

int Solution::isPalindrome(string s) {
int i = 0, j = s.length()-1;
while(i <= j){
    if(isalnum(s[i])){
        if(isalnum(s[j])){
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else return 0;
        }
        else
            j--;
    }
    else
        i++;
}
return 1;
}


//2nd Solutionint Solution::isPalindrome(string A) {
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    int i=0,j=A.length()-1;
    while(i<=j)
            {
        if(!isalnum(A[i]))
            {i++;
            continue;
        }
        if(!isalnum(A[j]))
            {j--;
            continue;
        }
        if(A[i]!=A[j])
            return 0;
            i++;
        j--;
    }
    return 1;
}