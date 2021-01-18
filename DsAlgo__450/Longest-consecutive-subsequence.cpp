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
            int count=0;
            while(1){
                count++;
                if(mp[a[i]+1]==0){
                    break;
                }
                else{
                    a[i]+=1;
                }
            }

            ans=max(ans,count);
        }
    }

  return ans;
}