class Solution {
public:
    void genSubset(vector<int> &nums, int index, vector<int> &v, vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back(v);
            return ;
        }
        v.push_back(nums[index]);
        genSubset(nums, index+1, v, ans);
        v.pop_back();
        genSubset(nums, index+1, v, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        genSubset(nums, 0, v, ans);
        return ans;
    }
};
