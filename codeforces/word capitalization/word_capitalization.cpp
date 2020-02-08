#include <bits/stdc++.h>

using namespace std;
int main()
{
    string S;
    string ans = "";
    cin >> S;
    ans += toupper(S[0]);

    for (int i = 1; i < S.size(); i++)
    {
        ans += S[i];
    }

    cout << ans << endl;

    return 0;
}