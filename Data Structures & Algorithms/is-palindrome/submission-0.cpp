class Solution {
public:
    bool isPalindrome(string s) {
        int i,j;
        string str="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                str+=tolower(s[i]);
            }
        }
        n=str.length();
        i=0,j=n-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
