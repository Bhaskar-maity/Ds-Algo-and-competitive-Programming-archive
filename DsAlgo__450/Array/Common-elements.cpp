class Solution
{
    public:    
    //https://practice.geeksforgeeks.org/problems/common-elements1132/1
    //time o(n1 + n2 + n3)
    //space o(1)
    // Input:
    // n1 = 6; A = {1, 5, 10, 20, 40, 80}
    // n2 = 5; B = {6, 7, 20, 80, 100}
    // n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
    // Output: 20 80
    // Explanation: 20 and 80 are the only
    // common elements in A, B and C.
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