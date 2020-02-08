#include <bits/stdc++.h>
using namespace std;
int a[101];
int cnt[101];
int main()
{
    int n, t1, t2, mx = -1, flag = 1;
    cin >> n;
    cin >> t1;
    for (int i = 0; i < t1; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;

        mx = a[i] > mx ? a[i] : mx;
    }

    cin >> t2;

    for (int i = 0; i < t2; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;

        mx = a[i] > mx ? a[i] : mx;
    }

    // cout << mx << endl;

    //sort(a, a + 2 * t);

    flag = mx >= n ? 1 : 0;
    for (int i = 1; i <= mx; i++)
    {
        if (cnt[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "I become the guy.";
    }

    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}