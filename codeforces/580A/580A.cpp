#include <bits/stdc++.h>
using namespace std;
int a[100007];
int main()
{
    int n, c = 0, flag = 0, i, j, mx = 0;
    cin >> n;
    for (j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    for (i = 0; i <= n - 1; i++)
    {

        if (i == 0 && a[i] <= a[i + 1])
        {
            c++;
        }
        else if ((a[i] <= a[i + 1]) or (a[i] >= a[i - 1]))
        {
            if (a[i] <= a[i + 1])
            {
                c++;
            }
            else if (a[i] >= a[i + 1])
            {
                c++;
                if (c > mx)
                    mx = c;
                c = 0;
            }
        }

        //cout << c;
    }

    cout << mx;
    return 0;
}