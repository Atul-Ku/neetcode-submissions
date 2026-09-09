class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);

        while(l<=h){
            int mid = l+(h-l)/2;
            int split=1;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum>mid){
                    sum=nums[i];
                    split++;
                }
            }
            if(split>k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }

        return l;
    }
};