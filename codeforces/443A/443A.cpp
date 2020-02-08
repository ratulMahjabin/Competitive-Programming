#include <bits/stdc++.h>
using namespace std;
int cnt[27];
int main()
{

    int ans = 0;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            cnt[s[i] - 'a' + 1]++;
        }
    }

    for (int i = 1; i <= 26; i++)
    {
        if (cnt[i] > 0)
        {
            ans++;
        }
    }

    cout << ans;
}