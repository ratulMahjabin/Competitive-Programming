#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tabs.in", "r", stdin);
    int t, n, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        if (k == 1 || k == n)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }

        if (n = 1 && k == 1)
            ans = 0;

        cout << ans << endl;
    }

    return 0;
}