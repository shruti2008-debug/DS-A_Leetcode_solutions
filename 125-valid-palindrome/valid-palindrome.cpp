class Solution {
public:
    bool isPalindrome(string s) {

        string ans="";

        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                ans+=tolower(s[i]);
            }
            else if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];

            }else if (s[i] >= '0' && s[i] <= '9') {
                ans += s[i];
            }       
        }

        string rev= ans;

        int st=0;
        int end=rev.length()-1;
        while(st<end){
            swap(rev[st],rev[end]);
            st++;
            end--;
        }

        if(rev==ans){
            return true;
        }else{
            return false;
        }
        
    }
};