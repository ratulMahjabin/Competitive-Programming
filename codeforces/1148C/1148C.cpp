#include <bits/stdc++.h>
using namespace std;
int a[3 * 100000 + 7];
int main()
{
    int n, i, j, temp, cnt = 0, m;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (is_sorted(a, a + n) != 1)
    {
        for (i = 1; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (2 * abs(i - j) >= n)
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;

                    cnt++;
                }
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << m;
}