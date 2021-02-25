//https://practice.geeksforgeeks.org/problems/minimum-deletitions/0#

// Input:
// 2
// aebcbda
// geeksforgeeks
// Output:
// 2
// 8



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