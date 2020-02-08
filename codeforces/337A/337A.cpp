#include <bits/stdc++.h>
using namespace std;
int a[1007];
int main()
{
    int n, p, res;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
        cin >> a[i];

    sort(a, a + p);
    int min = abs(a[0] - a[p - 1]);
    //cout << min << endl;
    //for (int i = 0; i < p; i++)
    //cout << a[i] << " ";

    for (int i = 0; i < p; i++)
    {
        if ((i + n - 1) < p)
        {
            res = abs(a[i + n - 1] - a[i]);
            if (res < min)
                min = res;
        }
    }
    //cout << endl;
    cout << min;

    return 0;
}