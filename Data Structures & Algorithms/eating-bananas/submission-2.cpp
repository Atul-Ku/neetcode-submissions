class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l = 1;
        int h = *max_element(piles.begin(), piles.end());
        
        while (l <= h) {
            int k = l + (h - l) / 2;
            long long cnt = 0; 
            for (int p : piles) {
                cnt += (p + k - 1LL) / k;
            }
            
            if (cnt > hr) {
                l = k + 1;
            } else {
                h = k - 1;
            }
        }

        return l;
    }
};
