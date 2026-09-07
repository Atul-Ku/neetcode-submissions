class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(int i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            pair<int,int> p;
            p.first=x.second;
            p.second=x.first;
            pq.push(p);
        }

        while(k--){
            auto p=pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        return ans;
    }
};