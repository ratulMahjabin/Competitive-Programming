#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s = "";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s += to_string(i);
    }

    cout << s[n - 1];

    return 0;
}