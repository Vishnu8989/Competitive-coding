#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int *d;
    d = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < a / 2; i++)
    {
        int temp = d[i];
        d[i] = d[a - i - 1];
        d[a - i - 1] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}