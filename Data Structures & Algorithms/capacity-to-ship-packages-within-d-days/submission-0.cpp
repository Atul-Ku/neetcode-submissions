class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<h){
            int mid = l+(h-l)/2;
            int d=0;
            int wt=0;
            for(int i=0;i<n;i++){
                wt+=weights[i];
                if(wt>mid){
                    wt=weights[i];
                    d++;
                }
            }
            if(d<days){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }

        return l;
    }
};