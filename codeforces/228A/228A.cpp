#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cnt = 0;
    int A[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (A[i] == A[j] && A[i] != 0)
            {
                A[i] = 0;
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}