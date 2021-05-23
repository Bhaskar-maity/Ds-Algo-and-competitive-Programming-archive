// https://www.interviewbit.com/problems/atoi/
// Input : "9 2704"
// Output : 9

int Solution::atoi(const string A) {
    string s=A;
    int flag=1;

    if(s[0]==' ') s.erase(s.begin());

    if(s[0]=='-') {s.erase(s.begin()); flag=-1;}
    if(s[0]=='+') s.erase(s.begin());

    long ans=0, i=0;
    //0-9 ascii values (48,57)
    while(s[i] >= 48 && s[i] <= 57){
        
            ans=(ans*10)+(s[i]-48);
        
        if(ans>INT_MAX){
            if(flag == -1) return INT_MIN;

            else return INT_MAX;
        }
        i++;
    }

    return flag*ans;

}
