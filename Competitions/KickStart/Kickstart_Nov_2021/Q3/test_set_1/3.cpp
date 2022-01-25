#include <iostream>
using namespace std;
string solve()
{
    int c = 1;
    int n;
    string s;
    cin >> n >> s;
    string temp;
    while (c > 0)
    {
        c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                temp = "2";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                s = temp2;
                c++;
                break;
            }
            else if (s[i] == '1' && s[i + 1] == '2')
            {
                temp = "3";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '2' && s[i + 1] == '3')
            {
                temp = "4";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '3' && s[i + 1] == '4')
            {
                temp = "5";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '4' && s[i + 1] == '5')
            {
                temp = "6";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '5' && s[i + 1] == '6')
            {
                temp = "7";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '6' && s[i + 1] == '7')
            {
                temp = "8";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '7' && s[i + 1] == '8')
            {
                temp = "9";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '8' && s[i + 1] == '9')
            {
                temp = "0";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
            else if (s[i] == '9' && s[i + 1] == '0')
            {
                temp = "1";
                string temp2 = s.substr(0, i) + temp + s.substr(i + 2);
                c++;
                s = temp2;
                break;
            }
        }
    }
    return s;
}
int main()
{
    int a;
    cin >> a;
    int i = 0;
    while (a > 0)
    {
        i++;
        cout << "Case #" << i << ": " << solve() << '\n';
        a--;
    }
    return 0;
}