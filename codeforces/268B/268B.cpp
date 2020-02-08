#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i;
    long long ans = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        ans += (n - i) * i;
    }

    cout << ans + n;
    //cout << (n * ((n * (n + 1)) / 2) - (n * (n + 1) * (2 * n + 1)) / 6) + n;

    return 0;
}