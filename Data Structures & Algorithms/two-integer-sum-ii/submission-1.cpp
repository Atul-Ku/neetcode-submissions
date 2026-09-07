class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> ans;
        int n=num.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(num[i]+num[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(num[i]+num[j]>target){
                j--;
            }
            else{
                i++;
            }
        }

        return ans;
    }
};
