#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int *d = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}