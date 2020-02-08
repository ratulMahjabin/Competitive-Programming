#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m;
    int x1, y1, x2, y2, x3, y3;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (cnt == 1 and a[i][j] == '*')
            {
                x1 = i, y1 = j;
                cnt++;
            }

            else if (cnt == 2 and a[i][j] == '*')
            {
                x2 = i, y2 = j;
                cnt++;
            }

            else if (cnt == 3 and a[i][j] == '*')
            {
                x3 = i, y3 = j;
            }
    }

    int x4, y4;
    if (x1 == x2)
        x4 = x3;
    else if (x1 == x3)
        x4 = x2;
    else
        x4 = x1;

    if (y1 == y2)
        y4 = y3;
    else if (y1 == y3)
        y4 = y2;
    else
        y4 = y1;

    cout << x4 << " " << y4 << endl;
}