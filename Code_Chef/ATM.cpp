#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float b;
    int a;
    cin >> a >> b;
    if (b >= a+.50)
    {
        if ((int)a % 5 == 0)
        {
            b = b - a - 0.5;
        }
    }
    std::cout << std::fixed << std::setprecision(2) << b;
    return 0;
}