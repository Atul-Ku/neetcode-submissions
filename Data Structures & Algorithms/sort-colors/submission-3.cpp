class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        
        int i=0;
        while(i<n){
            if(nums[i]==0){
                swap(nums[i],nums[st]);
                st++;
            }
            i++;
        }
        i=0;
        while(i<end){
            if(nums[i]==2){
                while(nums[end]==2 && i<end){
                    end--;
                }
                swap(nums[i],nums[end]);
            }
            i++;

        }
    }
};