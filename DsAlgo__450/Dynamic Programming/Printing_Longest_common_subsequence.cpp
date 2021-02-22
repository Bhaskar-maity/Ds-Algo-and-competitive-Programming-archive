//https://www.geeksforgeeks.org/printing-longest-common-subsequence/

#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

void Print_lcs(int x, int y, string s1, string s2){
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
            if(s1[i-1]==s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
                
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    //bottom up approach 
    int i=x; int j=y;
    while (i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            ans.push_back(s1[i-1]);
            i--; j--;
        }
        else {
            if (t[i-1][j]> t[i][j-1]){
                i--;
            }
            else {
                j--;
            }

        }
    }

    //reverse ans cause it's calculating from bottom to up
    reverse(ans.begin(), ans.end());
    //print
    cout<<ans;
    
    
    
    
};

int main(){
    
    string a="ARCDGH";
    string b="AEDFHR";
    Print_lcs(6,6,a,b); 

    return 0;
}