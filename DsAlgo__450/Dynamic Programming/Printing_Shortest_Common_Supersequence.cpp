//https://www.geeksforgeeks.org/print-shortest-common-supersequence/

// Input: X = "AGGTAB",  Y = "GXTXAYB"
// Output: "AGXGTXAYB" OR "AGGXTXAYB" 
// OR Any string that represents shortest
// supersequence of X and Y

// Input: X = "HELLO",  Y = "GEEK"
// Output: "GEHEKLLO" OR "GHEEKLLO"
// OR Any string that represents shortest 
// supersequence of X and Y


#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

void print_shortestCommonSupersequence(string X, string Y, int x, int y) {
    string ans;
    int t[x+1][y+1];
    //initialisation
    for(int i = 0; i <= x; i++)
        t[i][0] = 0;
        
    for(int j = 0; j <= y; j++)
        t[0][j] = 0;
    //top down approach
    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= y; j++)
        {
            if(X[i-1]==Y[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

     //bottom up approach 
    int i=x, j=y;
    while (i>0 && j>0){
        if(X[i-1] == Y[j-1]){
            ans.push_back(X[i-1]);
            i--; j--;
        }
        else {
            if (t[i-1][j]> t[i][j-1]){
                ans.push_back(X[i-1]);
                
                i--;
                
                
            }
            else {
                ans.push_back(Y[j-1]);
                
                j--;
            }

        }
    }
    //rest element push
    while (i>0)
    {
        ans.push_back(X[i-1]);
        i--;
    }

    while (j>0)
    {
        ans.push_back(Y[j-1]);
        j--;
    }
    

    //reverse ans cause it's calculating from bottom to up
    reverse(ans.begin(), ans.end());
    //print
    cout<<ans;

}
int main(){
    
    string a="AGGTAB";
    string b="GXTXAYB";
    cout<<"string a: " << a<<endl;

    cout<<"string b: " << b<<endl;

    cout<<"Shortest Common Supersequence: " ;
    print_shortestCommonSupersequence(a,b,6,7); 

    return 0;
}