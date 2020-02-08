#include <bits/stdc++.h>
using namespace std;
int a[14];
int main()
{
    freopen("scoreboard.in", "r", stdin);
    int t, n, i, indx, k;
    string s;
    cin >> t;
    while (t--)
    {
        int mx = 0;
        cin >> n >> s;
        for (i = 1; i <= 13; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n; i++)
        {
            a[s[i] - 'A' + 1] = 0;
        }

        for (k = 1; k <= 13; k++)
        {
            if (a[k] > mx)
            {
                mx = a[k];
                indx = k;
            }
        }

        //cout << indx << endl;
        cout << char(indx + 64) << endl;
    }

    return 0;
}