class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cnt_zero=0;
        int total_mul=1;
        int n=nums.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt_zero++;
            } 
        }
        if(cnt_zero==1){
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    total_mul*=nums[i];
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    v[i]=total_mul;
                }
            }

            return v;
        }
        if(cnt_zero==0){
            for(int i=0;i<n;i++){
                total_mul*=nums[i];
            }
            for(int i=0;i<n;i++){
                v[i]=total_mul/nums[i];
            }

            return v;
        }

        return v;
    }
};
