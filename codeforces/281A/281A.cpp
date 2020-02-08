#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    char ss = toupper(s[0]);

    cout << ss + s.substr(1, s.size()) << endl;

    return 0;
}