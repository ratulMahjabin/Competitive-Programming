#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int mx = max({a, b, c});

    int res = a + b + c - mx;

    if (res > mx)
        cout << 0 << endl;
    else
    {
        cout << abs(res - mx) + 1 << endl;
    }
}