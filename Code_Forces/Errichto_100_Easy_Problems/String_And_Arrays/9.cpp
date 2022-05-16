#include <iostream>

using namespace std;

int main()
{
    int l;
    cin >> l;
    string a;
    cin >> a;
    int c8 = 0;
    // int l = a.length();
    for (int i = 0; i < l; i++)
    {
        if (a[i] == '8')
        {
            c8 += 1;
        }
    }
    int tot = l / 11;
    if (c8 < tot)
    {
        cout << c8;
    }
    else
    {
        cout << tot;
    }
    return 0;
}