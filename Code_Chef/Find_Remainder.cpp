#include <iostream>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    cout << "\n"
         << a % b;
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
