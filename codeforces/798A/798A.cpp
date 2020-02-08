#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, x;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        x = s;
        for (int j = 0; j < s.size(); j++)
        {
            if (i != j && s[i] != x[j])
            {
                x[i] = s[j];
                cout << x << " " << s << endl;

                if (x == s)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}
