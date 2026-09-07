class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child_cnt=0;
        int gr=g.size();
        int ck=s.size();
        int i=0,j=0;
        while(i<gr && j<ck){
            if(g[i]<=s[j]){
                child_cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return child_cnt;
    }
};