#include <iostream>
using namespace std;

int main()
{

    long long n, m, c, total;
    int count = 0;

    cin >> n >> m;

    if (m == n)
    {
        cout << 0;
        return 0;
    }

    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }

    c = m / n;
    while (c % 2 == 0 || c % 3 == 0)
    {
        if (c % 2 == 0)
        {
            c = c / 2;
            count++;
        }

        if (c % 3 == 0)
        {
            c = c / 3;
            count++;
        }
    }

    if (c == 1)
    {
        cout << count;
    }
    else
    {
        cout << -1;
    }

    return 0;
}