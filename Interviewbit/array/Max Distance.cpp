//https://www.interviewbit.com/problems/max-distance/
// Problem Description

// Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// Example Input
// Input 1:

//  A = [3, 5, 4, 2]


// Example Output
// Output 1:

int Solution::maximumGap(const vector<int> &A) {
    int result = 0; 

    if( A.size() == 0 ) return result;

    //store A[i], index pairly
    vector< pair<int, int> > v;

    for( int i=0; i < A.size(); ++i )
    {
        v.push_back( {A[i],i} );
    }

    //sort
    sort(v.begin(), v.end());

    int len = v.size(), minIndex = v[0].second;

    for(int i=1; i < len; i++){
        //finding min index
        if(v[i].second < minIndex){
            minIndex = v[i].second;
        }

        //curr diference
        int diff= v[i].second - minIndex;

        //update max result
        if(diff > result){
            result = diff;
        }
    }

    return result;
}
