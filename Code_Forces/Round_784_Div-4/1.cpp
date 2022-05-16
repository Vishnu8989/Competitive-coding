#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;
int solve()
{
    int a;
    cin >> a;
    if (a <= 1399)
    {
        return 4;
    }
    else if (1400 <= a && a <= 1599)
    {
        return 3;
    }
    else if (1600 <= a && a <= 1899)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char **argv)
{
    int a = 0;
    cin >> a;
    while (a > 0)
    {
        int x = solve();
        a--;
        printf("Division %d\n", x);
    }

    return 0;
}