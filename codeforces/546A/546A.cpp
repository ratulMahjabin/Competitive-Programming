#include <bits/stdc++.h>

using namespace std;
int main()
{
    int k, n, w, res;

    cin >> k >> n >> w;

    res = (w * (w + 1) / 2) * k;

    if (res > n)
        cout << res - n;
    else
        cout << 0;

    return 0;
}