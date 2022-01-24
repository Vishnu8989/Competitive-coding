#include <iostream>
using namespace std;
int solve()
{
    
}
int main()
{
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