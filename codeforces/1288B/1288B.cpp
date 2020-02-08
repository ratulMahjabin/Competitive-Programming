#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long a;
        string b;

        cin >> a >> b;

        int s = 0;

        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '9')
                s++;
        }

        if (s == b.size())
            cout << a * b.size() << endl;
        else
            cout << a * (b.size() - 1) << endl;
    }
}