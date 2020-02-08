#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        int cnt = 0;

        cin >> a >> b;

        int dis = abs(a - b);

        int m = dis / 5;

        dis -= (5 * m);
        cnt += m;

        int n = dis / 2;
        dis -= (2 * n);
        cnt += n;

        cnt += dis;

        cout << cnt << endl;
    }
}