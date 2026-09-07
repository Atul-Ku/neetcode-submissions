class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> p;
        vector<string> v = strs;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            sort(v[i].begin(), v[i].end());
        }
        map<string,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i);
        }
        for(auto x:mp){
            vector<int> ind=x.second;
            for(int i:ind){
                p.push_back(strs[i]);
            }
            ans.push_back(p);
            p.clear();
        }
        return ans;
    }
};
