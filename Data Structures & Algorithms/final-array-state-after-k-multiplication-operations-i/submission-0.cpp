class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multi) {
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            int t=pq.top().first;
            int ind=pq.top().second;
            pq.pop();
            t*=multi;
            pq.push({t,ind});
        }
        while(!(pq.empty())){
            auto p=pq.top();
            nums[p.second]=p.first;
            pq.pop();
        }

        return nums;
    }
};