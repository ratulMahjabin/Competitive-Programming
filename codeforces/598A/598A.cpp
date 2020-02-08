#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long T;

    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long sum2 = 0,N = 1,sum;
        sum = (n * (n + 1)) / 2;
        while (N <= n)
        {
            sum2 += N;
            N *= 2;
        }
        cout << sum - (sum2 * 2) << endl;
    }

    return 0;
}