#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    int sum = 0;
    int mx = INT_MIN;

    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        mx = max(mx, a);
        sum += a;
    }

    if (sum - mx <= s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}