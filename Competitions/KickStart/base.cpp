#include <iostream>
using namespace std;
int solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(NULL);
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        i++;
        printf("Case #%d: %d\n", i, solve());
        a--;
    }
    return 0;
}