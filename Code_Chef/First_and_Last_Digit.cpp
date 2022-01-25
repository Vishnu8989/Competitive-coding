#include <iostream>
#include <cmath>
using namespace std;
void solve()
{
    int a;
    cin >> a;
    int b = log10(a) + 1;
    // cout << b;
    int sum = (a % 10) + (a / int(pow(10, b - 1)));
    cout << "\n";
    cout << sum;
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