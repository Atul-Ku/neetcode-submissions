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

    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        vector<vector<int>> ans;
        vector<int> v;
        genSubset(nums, 0, v, ans);
        for(int i=0;i<ans.size();i++){
            int x=0;
            for(int j=0;j<ans[i].size();j++){
                x^=ans[i][j];
            }
            sum+=x;
        }

        return sum;
    }
};