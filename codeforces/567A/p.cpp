#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;

    int citi[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> citi[i];
    }

    int p, q, r, s, x, y;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            p = q = abs(citi[i] - citi[i + 1]);

            r = s = abs(citi[i] - citi[n]);
        }

        else if (i == n)
        {
            p = q = abs(citi[i] - citi[n - 1]);

            r = s = abs(citi[i] - citi[1]);
        }

        else
        {
            p = abs(citi[i] - citi[i + 1]);
            q = abs(citi[i] - citi[i - 1]);

            r = abs(citi[i] - citi[1]);
            s = abs(citi[i] - citi[n]);
        }

        x = min(p, q);
        y = max(r, s);

        v.push_back(x);
        v.push_back(y);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        if (i % 2 == 1)
            cout << endl;
    }
}