class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int a = s.size();
        int i=a-1;
        int c=0;
        if(a==0){
        }
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            c++;
            i--;
        }
        return c;
    }
};
