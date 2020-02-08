#include <bits/stdc++.h>
using namespace std;
int A[101][101];
int main()
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
            if ((A[i][1] - A[i][0]) >= 2)
                cnt++;
        }
    }

    cout << cnt;
}