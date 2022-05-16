#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, b;
    cin >> n >> t >> b;
    int tot = 0;
    int st = 0;
    int arr, time, diff;
    for (int i = 0; i < n; i++)
    {
        cin >> arr >> time;
        diff = arr - st;
        tot += diff / b;
        st = arr + time;
    }
    tot += (t - st) / b;
    cout << tot;
    return 0;
}