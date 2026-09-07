class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        if(n==1){
            nums[0]*=nums[0];
            return nums;
        }
        if(n==2){
            nums[0]*=nums[0];
            nums[1]*=nums[1];
            if(nums[0]>nums[1]){
                swap(nums[0],nums[1]);
            }
            return nums;
        }
        int j,ind;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                ind=i;
                break;
            }
        }
        j=ind-1;
        while(j>=0 && ind<n){
            if(abs(nums[j])<abs(nums[ind])){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[ind]*nums[ind]);
                ind++;
            }
        }
        while(j>=0){
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        while(ind<n){
            ans.push_back(nums[ind]*nums[ind]);
            ind++;
        }
        return ans;
    }
};