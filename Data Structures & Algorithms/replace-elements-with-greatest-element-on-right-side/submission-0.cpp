class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        stack<int> st;
        ans.push_back(-1);
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            ans.push_back(st.top());
            while(!(st.empty()) && st.top()<arr[i]){
                st.pop();
            }
            if(st.empty()){
                st.push(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};