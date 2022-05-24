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
    int idx = 0;
    for (int i = 0; i < a - 1; i++)
    {
        int min = INT16_MAX;
        for (int j = i; j < a; j++)
        {
            if (d[j] < min)
            {
                min = d[j];
                idx = j;
            }
        }
        // cout << "Idx : " << idx << " : ";
        int temp = d[i];
        d[i] = d[idx];
        d[idx] = temp;
        for (int k = 0; k < a; k++)
        {
            cout << d[k] << " ";
        }
        cout << endl;
    }

    return 0;
}