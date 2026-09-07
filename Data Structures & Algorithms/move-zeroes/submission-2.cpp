class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<n){
            if(nums[j]!=0){
                if(nums[i]!=0){
                    while(i<j && nums[i]!=0){
                        i++;
                    }
                }
                swap(nums[i],nums[j]);
                j++;
            }
            else{
                j++;
            }
        }
    }
};