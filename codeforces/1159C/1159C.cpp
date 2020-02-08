#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    fast;

    ll i, k = 10000000004, n;
    cin >> n;   
    ll a[n + 1];

    for (i = 1; i <= n; i++)
        cin >> a[i];

    for (i = 2; i <= n; i++)
    {
        k = min(k, min(a[i], a[1]) / (i - 1));
    }
    for (i = 1; i < n; i++)
    {
        k = min(k, min(a[i], a[n]) / (n - i));
    }

    cout << k;

    return 0;
}