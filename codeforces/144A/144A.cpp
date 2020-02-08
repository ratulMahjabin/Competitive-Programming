#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = -1, min = 105, mx_indx, min_indx;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] > mx)
        {
            mx = a[i];
            mx_indx = i;
        }

        if (a[i] <= min)
        {
            min = a[i];
            min_indx = i;
        }
    }

    if (mx_indx > min_indx)
        min_indx++;
    cout << mx_indx + n - 1 - min_indx;

    return 0;
}