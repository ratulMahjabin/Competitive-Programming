#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    int cnt = 0;
    cin >> n;

    while (n--)
    {
        cin >> s;

        if (s[1] == '+')
            cnt++;
        else if (s[1] == '-')
            cnt--;
    }

    cout << cnt << endl;
}