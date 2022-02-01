#include <iostream>
using namespace std;
void solve()
{
    string a;
    cin>>a;
    int d = a.length();
    int count = 0;
    for (int i = 0; i < d; i++)
    {
        if (a[i] == '4')
        {
            count++;
        }
    }
    cout << count<<'\n';
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