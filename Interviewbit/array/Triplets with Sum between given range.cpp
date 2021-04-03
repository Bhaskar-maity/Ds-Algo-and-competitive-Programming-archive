//https://www.interviewbit.com/problems/triplets-with-sum-between-given-range/
// Given [0.6, 0.7, 0.8, 1.2, 0.4] ,

// You should return 1

// as

// 0.6+0.7+0.4=1.7

// 1<1.7<2

// Hence, the output is 1.

int Solution::solve(vector<string> &A) 
{
    //Real numbers//
    int n = A.size();
    float sum = 0.0;
    
    vector<float> arr(n);
    
    // Given array is array of strings. We need array of floats
    for(int i = 0; i < n; ++i)
    {
        // Convert into float using A[i]
        arr[i] = stof(A[i]);
    }
    
    // Take 3 variables x, y, z
    float x = arr[0], y = arr[1], z = arr[2];
    
    for(int i = 3; i < n; i++)
    {
        sum = x + y + z;
        
        if(1 < sum and sum < 2)
        {
            // Return found
            return 1;
        }
        
        // Else sum is either less than 1 or greater than 2
        else if(sum > 2)
        {
            // Replace greater with res[i]
            if(x > y and x > z)
            {
                x = arr[i];
            }
            else if(y > x and y > z)
            {
                y = arr[i];
            }
            else
            {
                z = arr[i];
            }
        }
        
        // Else sum is less than 1
        else
        {
            if(x < y and x < z)
            {
                x = arr[i];
            }
            else if(y < x and y < z)
            {
                y = arr[i];
            }
            else
            {
                z = arr[i];
            }
        }
    }
    sum = x + y + z;
    return (sum > 1 and sum < 2);
}