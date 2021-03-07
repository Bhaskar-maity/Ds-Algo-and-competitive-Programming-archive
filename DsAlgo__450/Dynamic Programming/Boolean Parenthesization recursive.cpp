//https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1#

class Solution{
public:
    int countWays(int N, string S){
        return solve(S, 0, N-1, 1);
    }

    


    //-------Recursive approach
    //i,j will parse through symbol T/F
    int solve(string s, int i, int j, int istrue){
        //base condition
        if(i>j)
            return 0;

        if(i==j){
            if(istrue == 1)
                return (int)(s[i] =='T');
            else
                return (int)(s[i] =='F');
        }

        

        int ans=2;

        //k parse through operators &/|
        for(int k=i+1; k<=j-1; k+=2){
            //leftTrue, leftFalse, rightTrue, rightFalse
            int lt,lf,rt,rf;

            lt=solve(s, i, k-1, 1);
            lf=solve(s, i, k-1, 0);

            rt=solve(s, k+1, j, 1);
            rf=solve(s, k+1, j, 0);

            if(s[k] == '&'){
                if(istrue == 1)
                    ans+= lt*rt;
                else
                    ans+= lt*rf + lf*rf + lf*rt;
            }

            if(s[k] == '|'){
                if(istrue == 1)
                    ans+= lt*rt + lt*rf  + lf*rt;
                else
                    ans+=  lf*rf;
            }

            if(s[k] == '^'){
                if(istrue == 1)
                    ans+= lt*rt + lf*rf ;
                else
                    ans+=  lt*rf  + lf*rt;
            }

        }

        return ans;


    }
};;
