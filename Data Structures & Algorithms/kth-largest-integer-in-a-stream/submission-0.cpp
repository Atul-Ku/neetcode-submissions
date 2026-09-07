class KthLargest {
public:
    vector<int> v;
    int kind;
    int sz;
    KthLargest(int k, vector<int>& nums) {
        kind=k;
        v=nums;
        sz=nums.size();
    }
    
    int add(int val) {
        sz++;
        v.push_back(val);
        sort(v.begin(),v.end());
        return v[sz-kind];
    }
};
