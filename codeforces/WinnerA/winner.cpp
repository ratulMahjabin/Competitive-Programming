#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;

    int i;

    while (cin >> n)
    {
        string name[1000];
        int score[1000];

        map<string, int> mp;
        for (i = 0; i < n; i++)
        {
            cin >> name[i] >> score[i];
            mp[name[i]] += score[i];
        }

        int maximum = 0;

        for (i = 0; i < n; i++)
        {
            maximum = max(mp[name[i]], maximum);
        }

        map<string, int> mp2;

        string ans = "";
        for (i = 0; i < n; i++)
        {
            mp2[name[i]] += score[i];
            if (mp2[name[i]] >= maximum && mp[name[i]] == maximum)
            {
                ans += name[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}