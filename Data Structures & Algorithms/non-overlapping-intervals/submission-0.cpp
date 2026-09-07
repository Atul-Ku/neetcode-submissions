class Solution {
public:
    static bool issort(vector<int> &a,vector<int> &b){
        if(a[1]==b[1]) return a[0]<b[0];
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        int n=inter.size();
        sort(inter.begin(),inter.end(),issort);
        int cnt=0;
        int finish=inter[0][1];
        for(int i=1;i<n;i++){
            if(finish<=inter[i][0]){
                finish=inter[i][1];
            }
            else{
                cnt++;
            }
        }

        return cnt;   
    }
};
