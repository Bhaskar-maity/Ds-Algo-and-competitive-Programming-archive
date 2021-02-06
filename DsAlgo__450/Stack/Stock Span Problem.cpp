// https://www.geeksforgeeks.org/the-stock-span-problem/
// using stack frame//firts function we return a vector containing index of Nearest greater from left index
// o(n)

vector<int> stock_span_index(int a[], int n){
    vector<int> v;
    stack<pair<int,int>> s;

    for(int i = 0; i < n; i++){
        if(s.size()==0){
            v.push_back(-1);

        }

        else if(s.size() > 0 && a[i]<s.top().first()){
            v.push_back(-1);
        }

        else if(s.size() > 0 && a[i]<=s.top().first()){
            while(s.size() > 0 && a[i]<=s.top().first())
                s.pop();

            if(s.size()==0){
                v.push_back(-1);

            }

            else {
                v.push_back(s.top().second);
            }
        }

        s.push(a[i],i);
    }

    return v;
}

//int v[] takes from the upper function
// 
vector<int> stock_span(int v[], int a[]){
    for(int i=0;i<v.size(); i++){
        v[i] = i - v[]
    }
    return v;
}