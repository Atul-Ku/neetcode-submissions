class Solution {
public:
    static int hammingWeight(uint32_t n) {
        n=n-((n>>1) & 0x55555555);
        n=(n & 0x33333333) + ((n>>2) & 0x33333333);
        n=(n+(n>>4)) & 0x0F0F0F0F;
        n=n+(n>>8);
        n=n+(n>>16);

        return n & 0x0000003F;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(hammingWeight(i));
        }

        return ans;
    }
};
