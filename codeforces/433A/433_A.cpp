#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c100 = 0, c200 = 0, a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 100)
            c100++;
        else
            c200++;
    }

    if (c100 % 2 != 0)
        cout << "NO" << endl;
    else if (c100 == 0 && c200 % 2 == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}