#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int cnt = 0;
    int ans = 0;
    int p = 0;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i <= k and a[i] > 0)
            p++;
    }
    if (a[1] > 0)
    {
        int x = a[k];

        for (int j = k + 1; j <= n; j++)
        {
            if (a[j] == x and a[j] > 0)
                cnt++;
        }
    }

    if (cnt > 0)
    {
        cout << p + cnt << endl;
    }

    else
    {
        cout << p << endl;
    }
}