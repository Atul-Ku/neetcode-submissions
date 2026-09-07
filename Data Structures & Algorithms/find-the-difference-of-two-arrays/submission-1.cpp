class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> n1;
        unordered_set<int> n2;

        for(int i=0;i<nums1.size();i++){
            n1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            n2.insert(nums2[i]);
        }
        set<int> s;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            if(n2.find(nums1[i])==n2.end()){
                s.insert(nums1[i]);
            }
        }
        for(int i:s){
            v.push_back(i);
        }
        ans.push_back(v);
        s.clear();
        v.clear();
        for(int i=0;i<nums2.size();i++){
            if(n1.find(nums2[i])==n1.end()){
                s.insert(nums2[i]);
            }
        }
        for(int i:s){
            v.push_back(i);
        }
        ans.push_back(v);
        return ans;
    }
};