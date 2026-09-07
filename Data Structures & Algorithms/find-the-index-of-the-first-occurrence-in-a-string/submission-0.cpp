class Solution {
public:
    int strStr(string h, string needle) {
        int n=h.length();
        int m=needle.length();

        for(int i=0;i<n;i++){
            if(h[i]==needle[0]){
                string str=h.substr(i,m);
                if(str==needle){
                    return i;
                }
            }
        }

        return -1;
    }
};