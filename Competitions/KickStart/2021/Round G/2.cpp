#include <iostream>
#include <string.h>
#include<vector>
using namespace std;
int soln()
{
    int n,k;
    cin>>n>>k;
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        d.push_back(temp);
    }
    int l=0;
    int r = 0;
    while(r<n){
        if(d[l]>0){
            l++;
        }
        r++;
    }

}
int main(int argc, const char **argv)
{
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        int ans = soln();
        i++;
        cout << "Case #" << i << ": ";
        if (ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
        a--;
    }
    return 0;
}