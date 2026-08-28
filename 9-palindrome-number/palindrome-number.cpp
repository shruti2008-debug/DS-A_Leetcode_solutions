class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int temp=x;
        int digit;
        while(temp>0){
            digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }

        if(x==rev){
            return true;
        }else{
            return false;
        }
        
    }
};