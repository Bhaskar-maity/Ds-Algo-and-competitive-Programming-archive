vector<int> nearest_smaller_to_left(int arr[], int n){
    vector<int> left;
    stack<pair<int,int>> s;
    int pseudoIdx = -1;
    for(int i = 0; i < n; i++){
        if(s.size()==0){
            left.push_back(-1);

        }

        else if(s.size() > 0 && a[i]>s.top().first()){
            left.push_back(s.top().second());
        }

        else if(s.size() > 0 && a[i]<=s.top().first()){
            while(s.size() > 0 && a[i]<=s.top().first())
                s.pop();

            if(s.size()==0){
                left.push_back(pseudoIdx);

            }

            else {
                left.push_back(s.top().second);
            }
        }

        s.push(a[i],i);
    }

    return left;
}