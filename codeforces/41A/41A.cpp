#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, flag = 0;
    string s1, s2;
    cin >> s1 >> s2;

    for (i = s1.size() - 1, j = 0; i >= 0, j < s2.size(); i--, j++)
    {
        if (s2[j] != s1[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";
}