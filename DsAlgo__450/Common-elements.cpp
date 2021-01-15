class Solution
{
    public:    
    //https://practice.geeksforgeeks.org/problems/common-elements1132/1
    //time o(n1 + n2 + n3)
    //space o(1)
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>v;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else 
                {
                    k++;
                }
                int x=A[i-1],y=B[j-1],z=C[k-1];
                while(A[i]==x)
                {
                    i++;
                }
                while(B[j]==y)
                {
                    j++;
                }
                while(C[k]==z)
                {
                    k++;
                }
            }
            return v;
        }
};