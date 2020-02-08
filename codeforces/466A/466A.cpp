#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, m, ans;
    cin >> n >> m >> a >> b;

    if ((b / m) >= a)
    {
        ans = n * a;
    }

    else
    {
        ans = (n / m) * b + min((n % m) * a, b);
    }

    cout << ans;
}