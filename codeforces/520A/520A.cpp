#include <bits/stdc++.h>
using namespace std;
int counter[26];
int main()
{
    int flag = 1, n;
    char s[100];

    cin >> n >> s;
    strupr(s);

    for (int i = 0; i < strlen(s); i++)
    {
        counter[s[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counter[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}