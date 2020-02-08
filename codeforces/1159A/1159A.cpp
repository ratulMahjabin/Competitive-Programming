#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, cnt = 0;
    string s;
    cin >> n;
    cin >> s;

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            cnt++;
        else if (cnt > 0 && s[i] == '-')
            cnt--;
    }

    cout << cnt;

    return 0;
}