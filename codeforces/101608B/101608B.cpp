#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("overcode.in", "r", stdin);
    int t, n, i, a;
    vector<int> v;
    cin >> t;
    while (t--)
    {
        v.clear();
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }

        if (n < 6)
        {
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());

                int ans = 0;
        for (i = 0; i <= v.size() - 6;)
        {
            if (v[i + 5] - v[i] <= 1000)
            {
                ans++;
                i += 6;
            }

            else
                i++;
        }

        cout << ans << endl;
    }
}