#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, i, ans = 0;
    cin >> n >> x;

    for (i = 2; i <= n; i++)
    {
        if (x % i == 0 and x / i <= n)
        {
            ans++;
        }
    }

    if (x <= n)
        cout << ans + 1;
    else
        cout << ans;

    return 0;
}