#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, i, j;
    vector<int> home, away;
    set<int> s;
    cin >> n;
    while (n--)
    {
        int h, a;
        cin >> h >> a;
        home.push_back(h);
        away.push_back(a);

        s.insert(h);
        s.insert(a);
    }

    for (i = 0; i < home.size(); i++)
    {
        for (j = 0; j < away.size(); j++)
        {
            if (home[i] == away[j])
                ans++;
        }
    }
    // int size = s.size();
    cout << ans;
}