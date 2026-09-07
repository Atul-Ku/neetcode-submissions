class Solution {
public:
    int reverse(int x) {
        int neg=x<0 ? 1: 0;
        long long m=x;
        long long rev=0;
        if(neg) m=-m;
        while(m>0){
            int a=m%10;
            rev=rev*10+a;
            m/=10;
        }
        if(neg) rev=-rev;
        if(rev>= -2147483648 && rev<=2147483647) return (int)rev;

        return 0;
    }
};
