#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        int len = s.length() - 1;
        if (s[len] == '+' || s[0] =='+')
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }
    cout << x;
}
