#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, k, a;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int i = 1;
    while (k - i > 0)
    {
        k = k - i;
        i++;
    }

    cout << v[k - 1];
}