class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int res=a+b;
                    st.push(res);
                }
                else if(tokens[i]=="-"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int res=b-a;
                    st.push(res);
                }
                else if(tokens[i]=="*"){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int res=a*b;
                    st.push(res);
                }
                else{
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    int res=b/a;
                    st.push(res);
                }
            }
        }

        return st.top();
    }
};
