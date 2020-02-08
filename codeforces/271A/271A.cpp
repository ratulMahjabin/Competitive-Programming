#include <bits/stdc++.h>
using namespace std;
int distinct(int n)
{
    set<int> v;
    int c = 0;
    while (n > 0)
    {
        int p = n % 10;
        c++;
        n /= 10;
        v.insert(p);
    }

    if (v.size() == c)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;

    while (1)
    {
        n += 1;
        if (distinct(n) == 1)
        {
            cout << n;
            return 0;
        }
    }

    return 0;
}