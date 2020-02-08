#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        vector<int> v;

        set<int> s;

        int n;

        cin >> n;

        int cmp = n;

        long long z = 2;
        while (z * z <= n)
        {
            if (n % z == 0)
            {
                v.push_back(z);
                s.insert(z);
                n /= z;
            }
            else
            {
                z++;
            }
        }
        if (n > 1)
        {
            v.push_back(n);
            s.insert(n);
        }

        // for (auto x : v)
        //     cout << x << " ";

        if (v.size() <= 2)
        {
            cout << "NO" << endl;
            continue;
        }

        long long ans, ans1, ans2;

        //sort(v.begin(), v.end());

        if (s.size() == 1)
        {
            ans = v[v.size() - 1];

            ans1 = v[0] * v[1];
            ans2 = 1;
            for (int i = 2; i < v.size() - 1; i++)
            {
                ans2 *= v[i];
            }
        }

        else
        {

            ans = v[v.size() - 1];

            ans1 = v[0];
            ans2 = 1;
            for (int i = 1; i < v.size() - 1; i++)
            {
                ans2 *= v[i];
            }
        }

        if (ans * ans1 * ans2 == cmp and ans != ans1 and ans1 != ans2)
        {
            cout << "YES" << endl;
            cout << ans << " " << ans1 << " " << ans2 << endl;
        }

        //cout << ans2 << endl;

        else
            cout << "NO" << endl;
    }
}