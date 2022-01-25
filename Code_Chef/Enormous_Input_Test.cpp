#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, k, c = 0;
    cin >> a;
    cin >> k;
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        if (temp % k == 0)
        {
            c++;
        }
    }
    cout << c;
}