#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
    int n, ans = 0, j = 1;

    a[1] = 1;
    for (int i = 2; i <= 10000; i++)
    {
        a[i] = i + a[i - 1];
    }

    cin >> n;

    while (1)
    {
        n -= a[j++];

        if (n < 0)
            break;

        ans++;
    }

    cout << ans;
}