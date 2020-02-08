#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, mx = 0, res = 0;
    cin >> n;
    while (n--)
    {

        cin >> a >> b;
        res += -a + b;
        if (res > mx)
            mx = res;
        else
            mx = mx;
    }

    cout << mx;

    return 0;
}