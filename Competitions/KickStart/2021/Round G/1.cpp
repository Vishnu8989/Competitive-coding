#include <iostream>
#include <string.h>
using namespace std;
int soln()
{
    long long int n, d, c, m;
    cin >> n >> d >> c >> m;
    string a;
    cin >> a;
    int l = a.length();
    int i = 0;
    for (i = 0; i < l; i++)
    {
        if (a[i] == 'C')
        {
            if (c < 1&& a[i+1]=='D')
            {
                return 0;
            }
            c--;
        }
        if (a[i] == 'D')
        {
            if (d < 1)
            {
                return 0;
            }
            d--;
            c = c + m;
        }
    }
    return 1;
}
int main(int argc, const char **argv)
{
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        int ans = soln();
        i++;
        cout << "Case #" << i << ": ";
        if (ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
        a--;
    }
    return 0;
}