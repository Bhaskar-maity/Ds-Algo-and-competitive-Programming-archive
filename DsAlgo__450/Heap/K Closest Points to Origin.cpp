//using maxheap(maximum element on top)
//o(nlognk)
//https://leetcode.com/problems/k-closest-points-to-origin/submissions/
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //maxheap
        priority_queue< pair<int, vector<int> > > mxhp;

        vector<vector<int> > ans;

        for(int i=0; i<points.size(); i++) {

            //push (x2 + y2), points[i]
            // root(sqr(x) + sqr(y)) is the distance from the center, while i am not using root to not increase complexity
            int x=points[i][0], y=points[i][1];
            mxhp.push(make_pair((x*x + y*y), points[i]));

            if(mxhp.size()>k){
                mxhp.pop();
            }
        }

        while(mxhp.size()>0){
            ans.push_back(mxhp.top().second);
            mxhp.pop();
        }
        
        return ans;
    }
};