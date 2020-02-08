#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, cnt = 0;
    string s;
    cin >> n;
    cin >> s;

    int j = 0;
    while (n--)
    {
        if (s[j++] == '+')
            cnt++;

        else if (cnt > 0 and s[j++] == '-')
            cnt--;
    }

    cout << cnt;

    return 0;
}