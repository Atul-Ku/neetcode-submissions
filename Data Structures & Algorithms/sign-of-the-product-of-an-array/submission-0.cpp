class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg_cnt=0;

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg_cnt++;   
            else if(nums[i]==0) return 0;
        }

        if(neg_cnt%2==0) return 1;
        return -1;
    }
};