#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, p = 0, q = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        if (a > b)
            p++;
        else if (a < b)
            q++;
    }

    if (p > q)
        cout << "Mishka";
    else if (p < q)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}