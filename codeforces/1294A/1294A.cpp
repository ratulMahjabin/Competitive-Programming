#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, n;

        cin >> a >> b >> c >> n;

        int mx = max({a, b, c});

        //sort(arr, arr + 3);

        int res = (2 * mx) - (a + b + c - mx);

        if (res > n)
            cout << "NO" << endl;
        else
        {
            if ((n - res) % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}