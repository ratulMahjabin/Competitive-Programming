#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    string s, str;
    while (n--)
    {
        cin >> s;
        str += s;
    }

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
            cnt++;
    }
    //cout << str << endl;
    cout << cnt + 1;
}