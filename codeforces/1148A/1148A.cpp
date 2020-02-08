#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        cout << a + b + (2 * c);
        return 0;
    }

    long long ans = min(a, b) + 1 + min(a, b) + 2 * c;

    cout << ans;

    return 0;
}