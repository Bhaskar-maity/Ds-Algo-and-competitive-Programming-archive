// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.

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

//https://www.youtube.com/watch?v=pfv76jZ6NDU
int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
    }