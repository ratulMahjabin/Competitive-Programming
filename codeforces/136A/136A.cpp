#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> A[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (A[j] == i)
            {
                cout << j << " ";
            }
        }
    }

    return 0;
}