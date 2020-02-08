#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    flash;

    string s;
    int n;
    int anton = 0, danik = 0;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
    {
        cout << "Anton";
    }

    else if (anton < danik)
    {
        cout << "Danik";
    }

    else
    {
        cout << "Friendship";
    }
    return 0;
}