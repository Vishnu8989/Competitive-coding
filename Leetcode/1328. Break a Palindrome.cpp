class Solution {
public:
    string breakPalindrome(string palindrome) {
        int a = palindrome.size();
        cout<<a;
        if(a==1){
            return "";
        }
        int flag=0;
        for(int i=0;i<a/2;i++){
            if(palindrome[i]!='a'){
                palindrome[i] = 'a';
                flag =1;
                break;
            }
        }
        if(flag==0){
            palindrome[a-1]='b';
        }
        return palindrome;
    }
};
