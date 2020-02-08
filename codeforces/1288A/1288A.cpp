#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;

        cin >> n >> d;

        if (d <= n)
        {
            cout << "YES" << endl;
            continue;
        }

        bool f = 0;

        for (int x = 1; x <= n; x++)
        {
            int a = ceil(d / double(x + 1));

            if (a + x <= n)
            {
                f = 1;
                break;
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}