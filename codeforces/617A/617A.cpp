#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 0;
    cin >> n;

    for (int i = 5; i > 0; i--)
    {
        if (i <= n)
        {
            int p = n / i;
            n -= p * i;
            res += p;
        }
    }

    cout << res;
}