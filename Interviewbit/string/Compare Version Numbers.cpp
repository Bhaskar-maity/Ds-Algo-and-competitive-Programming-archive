// https://www.interviewbit.com/problems/compare-version-numbers/
// If version1 > version2 return 1,
// If version1 < version2 return -1,
// otherwise return 0.
// 0.1 < 1.1 < 1.2 < 1.13 < 1.13.4
int Solution::compareVersion(string v1, string v2) {
    long long c1 = count(v1.begin(), v1.end(), '.');
    long long c2 = count(v2.begin(), v2.end(), '.');

    long long diff = abs(c1 - c2);

    if(c1>c2){
        while(diff--){
            v2+=".0";
        }
    }
    else {
        while(diff--){
            v1+=".0";
        }
    }

    replace(v1.begin(), v1.end(),'.',' ');
    replace(v2.begin(), v2.end(),'.',' ');

    stringstream sv1(v1), sv2(v2);
    long long n1,n2;
    while(sv1>>n1){
        sv2>>n2;

        if(n1>n2) return 1;
        else if(n2>n1) return -1;
    }

    return 0;
}
