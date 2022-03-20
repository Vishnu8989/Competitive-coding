#include <iostream>
using namespace std;
int solve()
{
    string ip, op;
    cin >> ip;
    cin >> op;
    int d[128];
    int a = ip.length();
    int a2 = op.length();
    if (a > a2)
    {
        return -1;
    }
    for (int i = 0; i < 128; i++)
    {
        d[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        d[ip[i]] -= 1;
    }
    for (int i = 0; i < a2; i++)
    {
        d[op[i]] += 1;
    }
    int sum = 0;

    for (int i = 0; i < 128; i++)
    {
        sum += d[i];
        if (d[i] < 0)
        {
            return -1;
        }
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        int temp = solve();
        if (temp == -1)
        {
            i++;
            printf("Case #%d: IMPOSSIBLE\n", i);
        }
        else
        {
            i++;
            printf("Case #%d: %d\n", i, temp);
        }
        a--;
    }
    return 0;
}