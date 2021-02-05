
vector<int> nearest_smaller_to_lefth(int a[], int n){
    vector<int> v;
    stack<int> s;

    for(int i = 0; i < n; i++){
        if(s.size()==0){
            v.push_back(-1);

        }

        else if(s.size() > 0 && a[i]>s.top()){
            v.push_back|(s.top());
        }

        else if(s.size() > 0 && a[i]<=s.top()){
            while(s.size() > 0 && a[i]<=s.top())
             s.pop();

            if(s.size()==0){
                v.push_back(-1);

            }

            else {
                v.push_back(s.ttop());
            }
        }

        s.push(a[i]);
    }
}