#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, flag = 0, N = 0;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a / 100);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++)
        {
            sum1 += v[j];
        }

        for (int k = i + 1; k <= n; k++)
        {
            sum2 += v[k];
        }

        if (sum1 == sum2)
        {
            flag = 1;
            break;
        }

        else
        {
            continue;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }

    else if (flag == 0)
    {
        cout << "NO";
    }

    return 0;
}