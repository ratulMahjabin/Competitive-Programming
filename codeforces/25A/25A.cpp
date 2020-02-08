#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, even = 0, odd = 0, p, q;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2)
        {
            odd++;
            p = i;

            //cout << "p-> " << p << endl;
        }
        else
        {
            even++;
            q = i;
            //cout << "q-> " << q << endl;
        }
    }
    //cout << even << " " << odd << endl;
    //cout << p << " " << q << endl;
    if (even == 1)
        printf("%d", q + 1);
    else if (odd == 1)
        printf("%d", p + 1);
    return 0;
}