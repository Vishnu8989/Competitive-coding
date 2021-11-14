#include <iostream>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    int h[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int rem = 0;
    int need = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        if (d[i] - h[i] > 0)
        {
            need++;
        }
        if ((h[i] - d[i]) % 2 >= 1)
        {
            rem++;
        }
    }
    if (rem >= need)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 1;
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