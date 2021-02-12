//1)using unordered_map for counting occurance then 2) pushing in minheap as pair of i.second = count, i.first = element, 
//3) pop extra elements from minheap, 4) storing ans
//time complexity = nlogk
typedef pair<int, int> pi; 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //minheap (pair<int, int>)
        priority_queue<pi, vector<pi>, greater<pi> > mnhp;

        //unordered map for counting no of occurance
        unordered_map<int, int> mp;
        //ans vector
        vector<int> ans;

        //pushing in unordered_map (hash)
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }


        for(auto i: mp){
            //i.second = count, i.first = element
            mnhp.push({i.second, i.first});
            //pop extra elements
            if(mnhp.size()>k){
                mnhp.pop();
            }
        }

        //ans storing
        while(k--){
            ans.push_back(mnhp.top().second);
            mnhp.pop();
           
        }
        
        return ans;
    }
};