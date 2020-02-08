#include <bits/stdc++.h>
using namespace std;
int pos[100005];
int n, m;
int main()
{
    long long cnt1 = 0, cnt2 = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pos[a] = i;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cnt1 += pos[x];
        cnt2 += (n - pos[x] + 1);
    }

    cout << cnt1 << " " << cnt2;
    return 0;
}