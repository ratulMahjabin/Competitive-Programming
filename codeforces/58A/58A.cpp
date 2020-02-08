#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string c = "hello";

    cin >> s;

    int i, ch = 0, cnt = 0, j = 0, idx = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = idx; j < s.size();)
        {
            if (c[i] == s[j])
            {
                cnt++;
                j++;
                idx = j;

                break;
            }
            j++;
            idx = j;
        }
        j = idx;
    }
    if (cnt == 5)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}