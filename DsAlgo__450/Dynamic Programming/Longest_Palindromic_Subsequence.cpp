//https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12/

// Longest Palindromic Subsequence
// Given a sequence, find the length of the longest palindromic subsequence in it.
// Example :
// Input:"bbbab"
// Output:4

//lps's parent question is lcs(longest common subsequence) like just reverse the string and comppare two string
#include <bits/stdc++.h>
using namespace std;

int lps(string  &s1) {
    int x=s1.length(); 
    //reverse s1 annd store in s2
     string s2 = string(s1.rbegin(),s1.rend()); ;
    
     //---lcs type ---
    int t[x+1][x+1];
    for(int i = 0; i <= x; i++)
        t[i][0] = 0;
        
    for(int j = 0; j <= x; j++)
        t[0][j] = 0;

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= x; j++)
        {
            if(s1[i-1]==s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    return t[x][x];
    //--lcs type---
}

int main(){
    
    string a="GEEKSFORGEEKS";
    // string b="GXTXAYB";
    cout<<"string : " << a<<endl;

    // cout<<"string b: " << b<<endl;

    cout<<"Longest Palindromic Subsequence: " ;
    cout<<lps(a); 

    return 0;
}