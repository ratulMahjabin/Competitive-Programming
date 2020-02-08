#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[205], b[205];
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res, flag1, flag2, x, y;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            x = a[i];
            y = b[j];
            res = x + y;

            for (int k = 0; k < n; k++)
            {
                if (a[k] == res)
                {
                    flag1 = 0;
                    break;
                }
                else
                    flag1 = 1;
            }

            for (int l = 0; l < m; l++)
            {
                if (b[l] == res)
                {
                    flag2 = 0;
                    break;
                }
                else
                    flag2 = 1;
            }

            if (flag1 and flag2)
            {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }
}