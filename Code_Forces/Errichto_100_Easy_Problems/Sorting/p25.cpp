#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    int min = INT16_MAX, num = 0, idx = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> num;
        if (num < min)
        {
            min = num;
            idx = i;
        }
    }
    cout << idx;
    return 0;
}