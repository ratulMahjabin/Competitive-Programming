#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i;
    string s;
    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1;
            return 0;
        }

        for (i = 0; i < n - 1; i++)
        {
            s += "1";
        }

        s += "0";
    }

    else
    {
        string s1 = to_string(t);

        for (i = 0; i < n; i++)
        {
            s += s1;
        }
    }

    cout << s;

    return 0;
}