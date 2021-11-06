class Solution {
public:
    string reverseWords(string s) {
        int right=0;
        int left=0;
        int a= s.size();
        // cout<<a;
        int i=0;
        for(int i=0;i<=a;i++){
            if(s[i]==' '||i==a){
                right = i-1;
                while(left<right){
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp;
                    left++;
                    right--;
                }
                left = i+1;
            }
        }
        return s;
    }

};
