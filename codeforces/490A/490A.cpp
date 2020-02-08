#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> t1, t2, t3;
    int n;

    cin >> n;

    int child[n + 1];
    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            c1++;
            t1.push_back(i);
        }
        else if (a == 2)
        {
            c2++;
            t2.push_back(i);
        }
        else
        {
            c3++;
            t3.push_back(i);
        }
    }

    if (c1 == 0 or c2 == 0 or c3 == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int res;

    res = min(c1, c2);
    res = min(res, c3);

    cout << res << endl;

    for (int i = 0; i < res; i++)
    {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << endl;
    }

    return 0;
}