#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s;
    string v;
    cin >> v;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }

    if ((s.size()) % 2 == 0)
        cout << "CHAT WITH HER!";
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}