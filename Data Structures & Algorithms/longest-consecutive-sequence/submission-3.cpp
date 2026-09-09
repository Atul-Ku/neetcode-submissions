class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int l=1;
        int maxi=1;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int num:st){
            if(st.find(num-1)!=st.end()){
                l++;
                maxi=max(maxi,l);
            }
            else{
                l=1;
            }
        }
        maxi=max(maxi,l);
        return maxi;
    }
};
