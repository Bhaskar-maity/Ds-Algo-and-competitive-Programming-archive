class Solution{

	public:
    
        

	int minDiffernce(int arr[], int n) 
	{    long long target=0;
	    for(int i=0;i<n;i++)
	    {
	       target+=arr[i]; 
	    }

        //------------- subset sum-----
	    long long t[n+1][target+1];
	    for(int i=0;i<n;i++)
	    {
	        for(long long j=0;j<target;j++)
	        {
	            if(i==0)
	            {
	                t[i][j]=false;
	            }
	            if(j==0)
	            {
	                t[i][j]=true;
	            }
	        }
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        for(long long j=1;j<target+1;j++)
	        {
	            if(j>=arr[i-1])
	            {
	                t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
	                
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }

        //--------------------------
        
	    long long  min=target;
	    for(int i=0;i<target+1;i++)
	    {
	        if(t[n][i]==true)
	        {
	            if(min>abs(target-2*i))
	            {
	                min=abs(target-2*i);
	            }
	        }
	    }
	    return min;
	}  

  
    
};