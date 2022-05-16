#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 'a')
        {
            a[i] += 'a' - 'A';
        }
        char t = a[i];
        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' || t == 'y')
        {
        }
        else
        {
            b = b + "." + t;
        }
    }
    cout << b;
    return 0;
}