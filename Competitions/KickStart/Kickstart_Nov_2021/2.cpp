#include <iostream>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    int d[n] = {0};
    string s;
    cin >> s;
    int k = s.length();
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'Y')
            d[i] = 3;
        else if (s[i] == 'B')
            d[i] = 5;
        else if (s[i] == 'R')
            d[i] = 2;
        else if (s[i] == 'O')
            d[i] = 6;
        else if (s[i] == 'P')
            d[i] = 10;
        else if (s[i] == 'G')
            d[i] = 15;
        else if (s[i] == 'A')
            d[i] = 30;
        else
            d[i] = 29;
    }
    //  Red + Yellow = Orange
    //  Red + Blue = Purple
    //  Yellow + Blue = Green
    //  Red + Yellow + Blue = Gray
    int y = 0, b = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] % 3 == 0)
        {
            int j = i;
            while (d[j] % 3 == 0)
            {
                d[j] = d[j] / 3;
                j++;
            }
            y++;
        }
        if (d[i] % 5 == 0)
        {
            int j = i;
            while (d[j] % 5 == 0)
            {
                d[j] = d[j] / 5;
                j++;
            }
            b++;
        }
        if (d[i] % 2 == 0)
        {
            int j = i;
            while (d[j] % 2 == 0)
            {
                d[j] = d[j] / 2;
                j++;
            }
            r++;
        }
    }
    count = b + y + r;
    return count;
}
int main()
{
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        i++;
        printf("Case #%d: %d\n", i, solve());
        a--;
    }
    return 0;
}