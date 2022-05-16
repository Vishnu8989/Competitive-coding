#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    int l = a.length();
    string r = a;
    for (int i = 0; i < l; i = i + 2)
    {
        r[i] = '2';
    }
    int st = 0, mida = l / 2, end = l - 1;
    for (int i = 0; i < l; i = i + 2)
    {
        if (a[i] == '1')
        {
            r[st] = '1';
            st += 2;
        }
        else if (a[i] == '3')
        {
            r[end] = '3';
            end -= 2;
        }
    }
    cout << r;
    return 0;
}