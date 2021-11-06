class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a.length() != b.length())
    {
        return false;
    }
    int d1[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        d1[a[i]-97]++;
        d1[b[i]-97]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (d1[i]!=0)
        {
            return false;
        }
    }
    return true;
    }

};
