#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while (t--)
    {
        int a, c = 0;
        for (int i = 1; i <= 3; i++)
        {
            cin >> a;
            if (a > 0)
            {
                c++;
            }
        }
        if (c >= 2)
            cnt++;
    }

    cout << cnt;

    return 0;
}