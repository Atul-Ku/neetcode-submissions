class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string ans="";
        uint32_t num=0;
        for(int i=0;i<32;i++){
            int b=((n>>i) & 1);
            ans+=to_string(b);
        }
        reverse(ans.begin(),ans.end());
        for(int i=31;i>=0;i--){
            uint32_t x=(1<<i);
            int bit = int(ans[i])-48;
            num+=(bit*x);
        }

        return num;
    }
};
