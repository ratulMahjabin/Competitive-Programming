#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int police = 0;
    int crime = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a == -1)
            crime++;
        else if (a > 0)
            police += a;

        if (crime == 0)
    }
}