#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, sum = 0, cnt = 0, x = 1;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++)
    {
        sum = x * k % 10;
        if (sum == r or sum == 0)
        {
            cout << x;
            return 0;
        }
        else
        {
            x++;
        }
    }

    return 0;
}