#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int A[a + b];
    for (int i = 1; i <= a + b; i++)
        A[i] = 0;
    for (int i = 1; i <= a; i++)
    {
        int p;
        cin >> p;

        if (A[p] == 0)
            A[p] = 1;
    }

    for (int i = 1; i <= b; i++)
    {
        int k;
        cin >> k;

        if (A[k] == 0)
            A[k] = 2;
    }

    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
}