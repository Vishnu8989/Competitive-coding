#include <iostream>
using namespace std;
int solve()
{
    string a;
    cin >> a;
    string tar;
    cin >> tar;
    int k2 = tar.length();
    int k = a.length();
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        int temp = 100;
        for (int j = 0; j < k2; j++)
        {
            int now = a[i] - tar[j];
            if (now < 0)
            {
                now = now * -1;
            }
            if (now > 13)
            {
                now = 26 - now;
            }
            else if (now < -13)
            {
                now = 26 + now;
            }
            if (now < temp)
            {
                temp = now;
            }
        }
        count = count + temp;
    }
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