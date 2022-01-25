#include <iostream>
using namespace std;
void solve()
{
    int b, c;
    cin >> b;
    int sum = 0;
    while (b > 0)
    {
        c = b % 10;
        b = b / 10;
        sum += c;
    }
    cout << sum << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while (a > 0)
    {
        solve();
        a--;
    }
    return 0;
}