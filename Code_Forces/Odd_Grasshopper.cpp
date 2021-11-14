#include <iostream>
using namespace std;
void solve()
{
    long long int a, n;
    cin >> a >> n;
    int h1 = n / 4;
    int h2 = n % 4;
    long long int ans = a;
    if (h2 == 0)
    {
        ans = a;
    }
    else if (h2 == 1)
    {
        if (a % 2 == 0)
        {
            ans = a - ((4 * h1) + 1);
        }
        else
        {
            ans = a + ((4 * h1) + 1);
        }
    }
    else if (h2 == 2)
    {
        if (a % 2 == 0)
        {
            ans = a + 1;
        }
        else
        {
            ans = a - 1;
        }
    }
    else
    {
        if (a % 2 == 0)
        {
            ans = a + ((4 * (h1 + 1)));
        }
        else
        {
            ans = a - ((4 * (h1 + 1)));
        }
    }
    cout << "Answer : " << ans << endl;
}
int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        solve();
        a--;
    }
}