#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double res = 0.00;
    cin >> n;
    int k = n;
    while (n--)
    {
        int a;
        cin >> a;

        res += (a * 1.00 / 100);
    }

    printf("%0.12lf", (res / k) * 100.00);

    return 0;
}