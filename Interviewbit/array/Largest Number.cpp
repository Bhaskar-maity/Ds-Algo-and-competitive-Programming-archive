// https://www.interviewbit.com/problems/largest-number/
// Given a list of non negative integers, arrange them such that they form the largest number.

// For example:

// Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

//sorting compare function
bool func(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    //// after normal sort - 1 27
    // but after special sort 27 1(gt than 1 27)
    return ab.compare(ba)>0?true:false;
}

string Solution::largestNumber(const vector<int> &A) {
    string ans="";
    int cnt=0;
    vector<string> v;
    for(int i=0; i<A.size(); i++){
        if(A[i] == 0) cnt++;
        v.push_back(to_string(A[i]));
    }
    //sort vector with spacial compare function
//     not number sorting we have check join of strings
// like 
// 27 1
// after normal sort - 1 27
// but after special sort 27 1(gt than 1 27)
    sort(v.begin(), v.end(), func);

    for(int i=0; i<A.size(); i++){
        ans+=v[i];
    }
    
    if(cnt == A.size()) return "0";
    else return ans;
}
