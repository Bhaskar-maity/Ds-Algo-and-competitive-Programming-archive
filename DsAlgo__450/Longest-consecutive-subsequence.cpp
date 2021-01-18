int findLongestConseqSubseq(int a[], int n){
    int ans=INT_MIN;
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[a[i]]=1;
    }

    for(int i=0;i<n;i++){
        if(mp[a[i]-1]==1){
            continue;
        }

        else{
            //arr will not be distorted
            int count=0;
            int x = a[i];
            while(1){
                count++;
                if(mp[x+1]==0){
                    break;
                }
                else{
                    x+=1;
                }
            }

            ans=max(ans,count);
        }
    }

  return ans;
}