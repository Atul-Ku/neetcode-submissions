class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n!=1){
            int m=n;
            int sum=0;
            while(m>0){
                int x=m%10;
                sum+=(x*x);
                m/=10;
            }
            if(mp.find(sum)!=mp.end()) return false;
            mp[sum]++;
            n=sum;            
        }

        return true;
    }
};
