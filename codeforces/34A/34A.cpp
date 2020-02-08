#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    //sort(A, A + n);

    int temp;
    int min = fabs(A[n - 1] - A[0]);
    int x = n - 1;
    int y = 0;
    for (int i = 0, j = 1; i < n - 1, j < n; i++, j++)
    {
        if (fabs(A[j] - A[i]) <= min)
        {
            min = fabs(A[j] - A[i]);
            x = i;
            y = j;
        }

        else
        {
            continue;
        }
    }

    cout << ++x << " " << ++y;
}