#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, years = 0;

    cin >> a >> b;
    while (1)
    {
        years++;
        a = 3 * a;
        b = 2 * b;
        if (a > b)
            break;
        }

    cout << years;

    return 0;
}