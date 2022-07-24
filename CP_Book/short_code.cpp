#include<iostream>

using namespace std;
// typedef is used to give short name to datatypes
typedef long long ll;

// macros : creating string of code will be replaced by some other code before compiling
#define print(x) cout<<x<<endl
#define get(x) cout<<"Enter Value : "; cin>>x
#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(x) (x)*(x)
#define sq1(x) x*x              //can cause error
int main()
{
    ll a = 111111;
    get(a);
    printf("%lld\n",a);
    print(a);
    rep(i,0,10)
    {
        print(i);
    }
    print(sq(3+3));
    print(sq1(3+3));
    return 0;
}