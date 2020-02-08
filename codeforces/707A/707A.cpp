#include <bits/stdc++.h>

char A[100][100];
using namespace std;

int main()
{
    int i, j, n, m, flag = 0;
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (A[i][j] == 'C' || A[i][j] == 'M' || A[i][j] == 'Y')
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
        cout << "#Color";
    else
    {
        cout << "#Black&White";
    }

    return 0;
}