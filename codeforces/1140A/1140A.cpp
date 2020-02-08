#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, cnt = 0;
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A, A + n);
    for (j = 0; j < n; j++)
    {
        if ((j + 1) == A[j])
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}