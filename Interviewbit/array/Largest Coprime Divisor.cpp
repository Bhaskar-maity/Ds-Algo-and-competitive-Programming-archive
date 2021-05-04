// https://www.interviewbit.com/problems/largest-coprime-divisor/
// You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

// X divides A i.e. A % X = 0
// X and B are co-prime i.e. gcd(X, B) = 1
// For example,

// A = 30
// B = 12
// We return
// X = 5

int gcd(int a, int b){
    if(b==0) return a;
    else {
        return gcd(b, a%b);
    }
}

int Solution::cpFact(int A, int B) {
    int x=10;
    for(int i= 1; i<= A; i++){

        if(A % i == 0 && gcd(i,B) == 1){
                x=i;
            
        }
    }

    return x;
}


///--------------alternate
int gcd(int a, int b){
    if(b==0) return a;
    else {
        return gcd(b, a%b);
    }
}

int Solution::cpFact(int A, int B)
{
    while(gcd(A,B)!=1)
    {
        A=A/gcd(A,B);
    }
    return A;
}
