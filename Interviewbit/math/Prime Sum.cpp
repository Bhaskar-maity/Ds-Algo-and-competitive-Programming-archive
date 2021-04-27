// https://www.interviewbit.com/problems/prime-sum/
// Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.


// Example:


// Input : 4
// Output: 2 + 2 = 4

//time o(n^1.5), space o(n)

//prime or not
bool isprime(int n){
    if(n>1){
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                return false;

            }
        }
        return true;
    }
    return false;
}


vector<int> Solution::primesum(int A) {

    vector<int> ans{2,2};

    if(A>4){
        for(int i=3; i<A; i+=2){
            //check
            if(isprime(i) && isprime(A-i)){
                ans[0] = i;
                ans[1] = A-i;
                break;
            }
        }
    }

    return ans;
}
