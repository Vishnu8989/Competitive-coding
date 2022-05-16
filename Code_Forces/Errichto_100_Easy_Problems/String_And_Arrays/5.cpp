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
    int max = 0;
    int i = 0;
    while (i < l - 1)
    {
        max = 0;
        while (a[i] == a[i + 1])
        {
            i++;
            max++;
        }
        if (max >= 6)
        {
            cout << "YES";
            return 0;
        }
        i++;
    }
    cout << "NO";
    return 0;
}