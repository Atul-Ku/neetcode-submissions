class MinStack {
public:
    stack<int> st;
    map<int,int> mp;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        mp[val]++;
    }
    
    void pop() {
        int t=st.top();
        st.pop();
        if(mp[t]>1){
            mp[t]--;
        }
        else{
            mp.erase(t);
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        auto it=mp.begin();
        return it->first;
    }
};
