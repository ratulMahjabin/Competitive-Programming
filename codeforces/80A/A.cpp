#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }

    return 1;
}
int main()
{

    int flag = 0, num;
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i) == 1)
        {
            num = i;
            flag = 1;
            break;
        }
    }

    if (flag and num == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}