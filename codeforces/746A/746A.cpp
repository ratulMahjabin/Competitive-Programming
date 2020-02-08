#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int sum = 0;
    while (a >= 1 and b >= 2 and c >= 4)
    {

        a--;
        b -= 2;
        c -= 4;
        sum += 7;
    }

    cout << sum << endl;
}