#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int main()
{
    int n, maxx = -1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or j == 1)
                a[i][j] = 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n][n];
}