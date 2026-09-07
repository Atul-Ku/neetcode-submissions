class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=nums1.size();
        int n2=nums2.size();

        vector<int> v=nums1;
        nums1.clear();
        int i=0,j=0;
        while(i<n1-n2 && j<n2){
            if(v[i]<=nums2[j]){
                nums1.push_back(v[i]);
                i++;
            }
            else{
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1-n2){
            nums1.push_back(v[i]);
            i++;
        }
        while(j<n2){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};