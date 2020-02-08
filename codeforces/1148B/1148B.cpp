#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

deque<int> a, b;
int main()
{
    flash;

    long long n, m, t1, t2, k, i, j, d, res = -1;

    cin >> n >> m >> t1 >> t2 >> k;

    for (i = 0; i < n; i++)
    {
        cin >> d;
        a.push_back(d);
    }

    for (i = 0; i < m; i++)
    {
        cin >> d;
        b.push_back(d);
    }

    if (k >= n || k >= m)
    {
        cout << -1;
        return 0;
    }

    for (i = 0; i <= k; i++)
    {
        while (b.size() != 0 and b.front() < a[i] + t1)
            b.pop_front();

        if (b.size() <= k - i)
        {
            cout << -1;
            return 0;
        }

        res = max(res, b[k - i] + t2);
    }

    cout << res;

    return 0;
}