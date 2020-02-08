#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i]);
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << char(v[i]) << "+";
    }

    cout << char(v[v.size() - 1]) << endl;
}