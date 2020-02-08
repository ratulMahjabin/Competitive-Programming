#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int sec_dig = n;
    int mid_row = (n + 1) / 2;
    int mid_col = (n + 1) / 2;

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            int a;

            cin >> a;

            //cout << i << "-" << j << endl;

            if (i == j and sec_dig != j)
            {
                ans += a;
            }

            else if (j == mid_col and sec_dig != j)
            {
                ans += a;
            }

            else if (i == mid_row and sec_dig != j)
                ans += a;
            else if (sec_dig == j)
            {
                ans += a;
                sec_dig--;
            }
        }
    }

    cout << ans << endl;

    return 0;
}