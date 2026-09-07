class Solution {
public:
    int calPoints(vector<string>& oper) {
        int ans=0;
        int n=oper.size();  
        stack<int> st;
        int i=0;
        while(i<n){
            if(oper[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                int sum=a+b;
                st.push(a);
                st.push(sum);
            }
            else if(oper[i]=="C"){
                st.pop();
            }
            else if(oper[i]=="D"){
                int t=st.top();
                st.push(2*t);
            }
            else{
                st.push(stoi(oper[i]));
            }
            i++;
        }
        while(!(st.empty())){
            int t=st.top();
            st.pop();
            ans+=t;
        }
        return ans;
    }
};