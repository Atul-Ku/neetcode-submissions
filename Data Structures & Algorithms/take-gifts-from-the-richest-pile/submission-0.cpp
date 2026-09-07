class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int> pq;
        int n=gifts.size();
        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }
        while(k--){
            int t=pq.top();
            pq.pop();
            int sq=sqrt(t);
            pq.push(sq);
        }
        while(!(pq.empty())){
            int t=pq.top();
            pq.pop();
            ans+=t;
        }
        return ans;
    }
};