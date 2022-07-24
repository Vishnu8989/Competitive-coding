#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    cin >> a;
    int temp;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        cout << temp * temp << '\n';
    }
    return 0;
}