class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans;
        int n=temp.size();

        stack<int> st;
        vector<int> warm(n);
        warm[n-1]=0;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!(st.empty()) && temp[st.top()]<=temp[i]){
                st.pop();
            }
            if(st.empty()){
                warm[i]=0;
            }
            else{
                warm[i]=st.top();
            }
            st.push(i);
        }

        for(int i=0;i<n;i++){
            if(warm[i]!=0){
                ans.push_back(warm[i]-i);
            }
            else{
                ans.push_back(warm[i]);
            }
        }
        return ans;
    }
};
