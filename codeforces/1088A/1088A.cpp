#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i * j > n and i / j < n and i % j == 0)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
}