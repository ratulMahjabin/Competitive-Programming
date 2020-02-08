#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, s;

    cin >> n >> a >> b >> s;

    if ((n - 1) * a + b > s || (n - 1) * b + a < s)
    {
        cout << "NO";
    }

    else
    {
        cout << "YES";
    }
}