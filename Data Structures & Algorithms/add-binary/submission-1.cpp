class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int a_len=a.length();
        int b_len=b.length();

        int i=a_len-1;
        int j=b_len-1;
        int rem=0;
        while(i>=0 && j>=0){
            int ax=int(a[i])-48;
            int bx=int(b[j])-48;

            int s=ax^bx^rem;
            rem=((ax & bx) + ((ax^bx)&rem));
            ans+=to_string(s);
            i--;
            j--;
        }

        while(i>=0){
            int ax=int(a[i])-48;

            int s=ax^rem;
            rem=(ax & rem);
            ans+=to_string(s);
            i--;
        }
        while(j>=0){
            int bx=int(b[j])-48;

            int s=bx^rem;
            rem=(bx & rem);
            ans+=to_string(s);
            j--;
        }
        if(rem) ans+='1';
        reverse(ans.begin(),ans.end());

        return ans;
    }
};