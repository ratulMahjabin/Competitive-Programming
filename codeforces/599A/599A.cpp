#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1, d2, d3;

    cin >> d1 >> d2 >> d3;

    int ans1 = min(d1, d2);
    int ans2 = min(d1 + d2, d3);
    int ans3 = min((d3 + ans1), d1 + d2 - ans1);
    cout << ans1 + ans2 + ans3 << endl;
}