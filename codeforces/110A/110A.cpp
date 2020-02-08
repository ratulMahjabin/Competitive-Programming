#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '4'|| S[i] == '7')
        {
            cnt++;
        }
    }

    if (cnt == 4 || cnt == 7)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}