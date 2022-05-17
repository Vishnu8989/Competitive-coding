#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a;
    cin >> a;
    double root = sqrt(a);
    double peri;
    if (root == round(root))
    {
        peri = root * 4;
    }
    else
    {
        while (true)
        {
            if (a % (int)round(root) == 0)
            {
                int temp = a / (int)round(root);
                peri = (temp + (int)round(root)) * 2;
                break;
            }
            root--;
        }
    }
    cout << peri;
    return 0;
}
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int a;
//     cin >> a;
//     int num = sqrt(a);
//     int min_sum = INT16_MAX;
//     cout << "Num : " << num << endl;
//     for (int i = 1; i <= num; i++)
//     {
//         if (a % i == 0)
//         {
//             int temp = a / i;
//             cout << temp << " " << i << '\n';
//             if ((temp + i) < min_sum)
//             {
//                 min_sum = temp + i;
//             }
//         }
//     }
//     cout << min_sum * 2;
//     return 0;
// }