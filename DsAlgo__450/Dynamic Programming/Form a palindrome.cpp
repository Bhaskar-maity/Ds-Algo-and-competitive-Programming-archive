//https://practice.geeksforgeeks.org/problems/form-a-palindrome/0/?company[]=Amazon&company[]=Amazon&problemType=full&page=1&sortBy=submissions&query=company[]AmazonproblemTypefullpage1sortBysubmissionscompany[]Amazon#

// Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
// For Example:
// ab: Number of insertions required is 1. bab or aba
// aa: Number of insertions required is 0. aa
// abcd: Number of insertions required is 3. dcbabcd

// Input:
// 3
// abcd
// aba
// geeks

// Output:
// 3
// 0
// 3

//same solution with minimum deletion
//here sol of no of string inserted
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int minimumDeletions(string str1)
{
    string str2 = str1;
    
    reverse(str1.begin(), str1.end());
    
    int n = str1.size();
    
    int t[n+1][n+1];
    
    for(int i = 0; i <= n; i++)
    {
        t[i][0] = 0;
    }
    
    for(int j = 0; j <= n; j++)
    {
        t[0][j] = 0;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(str2[i-1] == str1[j-1])
            {
                t[i][j] = 1 + t[i-1][j-1];
            }
            else
            {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }
    
    // size of arr - lcs of string
    int res = n - t[n][n];
    
    return res;;
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string str;
        cin >> str;
        
        cout << minimumDeletions(str) << endl;
    }
    
    return 0;
}