#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans1, ans2, ans;

    cin >> n;

    int res = n / 10;

    ans1 = res * 10;
    ans2 = res * 10 + 10;

    int a = abs(ans1 - n);
    int b = abs(ans2 - n);

    if (a > b)
        ans = ans2;
    else
        ans = ans1;

    cout << ans << endl;
}