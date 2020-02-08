#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;

    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 3);
    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        ans += abs(a[i] - a[i + 1]);
    }

    cout << ans << endl;
}