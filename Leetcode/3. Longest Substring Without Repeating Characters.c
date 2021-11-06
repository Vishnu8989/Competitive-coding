int lengthOfLongestSubstring(char * s)
{
        if (!*s)
                return 0;

        int c[128] = {0};
        memset(c, 0xff, sizeof(int) * 128);

        int l = 0;
        int r = 0;
        int max = 0;
        while (s[r]) {
                if (c[s[r]] >= 0)
                        l = l >= c[s[r]] + 1 ? l : c[s[r]] + 1;
                c[s[r]] = r;

                max = max >= r - l + 1 ? max : r - l + 1;
                r++;
        }

        return max;
}
