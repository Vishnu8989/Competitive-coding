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
    int st, end, sum = 0;
    cin >> st >> end;
    for (int i = st; i <= end; i++)
        sum += d[i];
    cout << sum;
    return 0;
}