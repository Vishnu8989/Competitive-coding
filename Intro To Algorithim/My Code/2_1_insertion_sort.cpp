#include <iostream>
#include <ctime>

using namespace std;

#define mswap(a, b) \
    {               \
        a = a + b;  \
        b = a - b;  \
        a = a - b;  \
    }

#define printArray(d, a)        \
    for (int i = 0; i < a; i++) \
    {                           \
        cout << d[i] << " ";    \
    }                           \
    cout << '\n';

#define print(x, e) cout << e \
                         << x << " ";

int main()
{
    system("CLS");
    cout << "-------------------------------------\n";
    srand(time(0));
    int a = 10;
    // cout<<"Enter length of array : ";
    // cin>>a;
    int *d = new int[a];
    for (int i = 0; i < a; i++)
    {
        d[i] = rand() % 100;
    }

    printArray(d, a);
    for (int i = 1; i < a; i++)
    {
        int key = d[i];
        int j = i - 1;
        while (j >= 0 && d[j] > key)
        {
            d[j + 1] = d[j];
            j -= 1;
        }
        d[j + 1] = key;
    }
    printArray(d, a);
    cout << "\n-------------------------------------\n";
    return 0;
}