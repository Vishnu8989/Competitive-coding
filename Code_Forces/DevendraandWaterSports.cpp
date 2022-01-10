#include <iostream>
using namespace std;
void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a = a - b - c - d - e;
    if (a >= 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout<<"\n";
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