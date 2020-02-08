#include <bits/stdc++.h>
using namespace std;
int cnt1[27], cnt2[27];
int main()
{
    int flag = 1;
    string s1, s2, s;
    cin >> s1 >> s2 >> s;

    for (int i = 0; i < s1.size(); i++)
    {
        cnt1[s1[i] - 'A' + 1]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        cnt1[s2[i] - 'A' + 1]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cnt2[s[i] - 'A' + 1]++;
    }

    for (int i = 1; i <= 26; i++)
    {
        if (cnt1[i] != cnt2[i])
        {
            flag = 0;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}