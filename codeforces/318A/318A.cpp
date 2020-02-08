#include <bits/stdc++.h>
using namespace std;
long long f(long long p)
{
    long long res = 0;
    while (p > 0)
    {
        res += (p % 10);
        p /= 10;
    }

    return res;
}
int main()
{

    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}