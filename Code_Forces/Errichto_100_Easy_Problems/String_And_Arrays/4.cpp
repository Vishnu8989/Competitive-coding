#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 'a')
        {
            a[i] += 'a' - 'A';
        }
        if (b[i] < 'a')
        {
            b[i] += 'a' - 'A';
        }
        int temp = a[i] - b[i];
        if (temp < 0)
        {
            cout << -1;
            return 0;
        }
        if (temp > 0)
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}