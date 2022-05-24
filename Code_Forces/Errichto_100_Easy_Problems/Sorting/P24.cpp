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
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (d[j] > d[j + 1])
            {
                int temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
        for (int k = 0; k < a; k++)
        {
            cout << d[k] << " ";
        }
        cout << endl;
    }

    return 0;
}