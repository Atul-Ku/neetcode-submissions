class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int max_len=0;
        unordered_map<char,int> mp;
        while(i<n){
            mp[s[i]]++;
            
            while(j<i && mp[s[i]]>1){
                mp[s[j]]--;
                j++;
            } 
            max_len=max(max_len,i-j+1);
            i++;
        }

        return max_len;
    }
};
