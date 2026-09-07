class Solution {
public:
    static bool issort(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]) return a[1]<b[1];
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>> ans;
        int n=inter.size();
        sort(inter.begin(),inter.end(),issort);
        vector<int> v=inter[0];
        for(int i=1;i<n;i++){
            int prev_end=v[1];
            if(prev_end>=inter[i][0]){
                v[1]=max(inter[i][1],prev_end);
            }
            else{
                ans.push_back(v);
                v=inter[i];
            }
        }
        ans.push_back(v);
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> ans=merge(intervals);
        return ans;
    }
};
