#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        int low, high;

        low = min(a, b);
        low = min(low, c);

        high = max(a, b);
        high = max(high, c);

        long long second = a + b + c - (low + high);

        long long ans = low + second + 1;

        //cout << second << endl;
        if (ans >= high)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        //cout << low << " " << second << " " << high << endl;
    }
}