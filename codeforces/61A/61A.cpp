#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, str;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            str += "1";
        else
            str += "0";
    }

    cout << str;

    return 0;
}