#include <iostream>
using namespace std;
int solve()
{
    int n, m, c;
    cin >> n >> m;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        sum += c;
    }
    return sum % m;
}
int main()
{
    ios_base::sync_with_stdio(false);
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