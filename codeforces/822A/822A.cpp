#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    long long int x = 1, y = 1;

    for (int i = a; i > 0; i--)
    {
        x *= i;
    }

    for (int i = b; i > 0; i--)
    {
        y *= i;
    }

    cout << __gcd(x, y) << endl;

    return 0;
}