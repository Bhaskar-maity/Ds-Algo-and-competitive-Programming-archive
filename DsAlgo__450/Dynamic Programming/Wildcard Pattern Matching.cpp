//longest commn subsequence code
int lcs(int x, int y, string s1, string s2){
    int t[x+1][y+1];
    for(int i = 0; i <= x; i++){
        t[i][0]=0;
        t[0][i] = 0;
    }

    for(int i=1; i <= x; i++){
        for(int j = 1; j <=y; j++){
            if(s1[i-1] == s2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else {
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }

    return t[x][y];

}

//wildcard function
int wildCard(string pattern,string str)
{
    
    //---Remove all *? other than alphabets from string
    for (int i = 0; i < pattern.size(); i++) { 
          
        
        if (pattern[i] == '*' || pattern[i] == '?')  
        {    
            
            pattern.erase(i, 1);  
            i--; 
        } 
    }
    // replace(pattern.begin(), pattern.end(),"*","");
    // replace(pattern.begin(), pattern.end(),"?","");
    //--------

    if(pattern.size() == lcs(pattern.size(), str.size(), pattern, str)){
        return 1;
    }
    else return 0;
}