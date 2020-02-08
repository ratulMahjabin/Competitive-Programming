#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a;
    vector<int> v;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    if (k > v.size())
        cout << -1;
    else
    {
        cout<<v[n-k]<<" "<<v[n-k]<<endl;
    }
    return 0;
}