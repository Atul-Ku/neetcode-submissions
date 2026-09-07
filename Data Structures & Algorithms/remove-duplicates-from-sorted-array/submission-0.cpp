class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        v.push_back(nums[0]);
        int k=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
                k++;
            }
        }
        nums=v;
        return k;
    }
};