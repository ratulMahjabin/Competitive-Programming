#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    bool flag = 1;
    int cnt = 0;

    while (1)
    {
        if (flag)
        {
            n--;
            flag = 0;

            if (n >= 0)
                cnt++;
            else
                break;
        }

        else if (!flag)
        {
            n = n - 2;
            flag = 1;

            if (n >= 0)
                cnt++;
            else
                break;
        }
    }

    cout << cnt << endl;
}