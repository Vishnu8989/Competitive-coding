#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string a;
    cin >> a;
    int l = a.length();
    if (l <= 10)
    {
        cout << a << '\n';
        return;
    }
    else
    {
        cout << a[0] << l - 2 << a[l - 1] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int i = 0;
    while (i < a)
    {
        solve();
        i++;
    }
    return 0;
}