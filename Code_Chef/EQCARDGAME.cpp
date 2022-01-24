#include <iostream>
using namespace std;
void solve()
{
    int a = 0;
    cin >> a;
    cout << (52 % a) << '\n';
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
    return 0;
}