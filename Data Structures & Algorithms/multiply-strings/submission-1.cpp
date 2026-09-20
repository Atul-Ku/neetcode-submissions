class Solution {
public:
    static string addString(string s1, string s2){
        string ans="";
        int m=s1.length();
        int n=s2.length();

        if(m<n){
            reverse(s1.begin(),s1.end());
            for(int i=0;i<n-m;i++){
                s1+='0';
            }
            reverse(s1.begin(),s1.end());
        }
        if(m>n){
            reverse(s2.begin(),s2.end());
            for(int i=0;i<m-n;i++){
                s2+='0';
            }
            reverse(s2.begin(),s2.end());
        }
        int sz=s1.length();
        int carry=0;
        for(int i=sz-1;i>=0;i--){
            int a=int(s1[i])-48;
            int b=int(s2[i])-48;

            int sum=(a+b+carry)%10;
            carry=(a+b+carry)/10;
            ans+=to_string(sum);
        }
        if(carry) ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string multiply(string num1, string num2) {
        string ans="";
        int m=num1.length();
        int n=num2.length();
        vector<string> store;
        if(num1=="0" || num2=="0") return "0";

        for(int i=m-1;i>=0;i--){
            int mul=int(num1[i])-48;
            string str="";
            for(int ind=0;ind<(m-1)-i;ind++){
                str+='0';
            }
            int carry=0;
            for(int j=n-1;j>=0;j--){
                int num=int(num2[j])-48;
                int prod=((mul*num)+carry)%10;
                carry=((mul*num)+carry)/10;
                str+=to_string(prod);
            }
            if(carry) str+=to_string(carry);
            reverse(str.begin(),str.end());
            store.push_back(str);
        }

        for(int i=0;i<store.size();i++){
            string st=addString(ans,store[i]);
            ans=st;
        }       
        return ans; 
    }
};
