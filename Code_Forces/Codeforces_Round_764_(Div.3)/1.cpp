#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;
void solve()
{
    int a;
    cin >> a;
    int *d;
    d = (int *)malloc(a * sizeof(int));
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        cin >> d[i];
        if (d[i] > max)
        {
            max = d[i];
        }
        if (d[i] < min)
        {
            min = d[i];
        }
    }
    cout << max - min << endl;
}
int main(int argc, char **argv)
{
    int a = 0;
    cin >> a;
    while (a > 0)
    {
        solve();
        a--;
    }

    return 0;
}
