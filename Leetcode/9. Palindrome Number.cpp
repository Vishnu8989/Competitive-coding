class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int a = 0;
        int b =x;
        while(b!=0){
            a= a*10 + b%10;
            b = b/10;
        }
        cout<<a;
        if(a==x){
            return true;
        }
        return false;
    }
};
