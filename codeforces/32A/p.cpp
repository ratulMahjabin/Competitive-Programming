#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;

    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j and abs(a[i] - a[j]) <= d)
                cnt++;
        }
    }

    cout << cnt << endl;
}