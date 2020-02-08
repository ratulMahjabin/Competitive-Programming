#include <bits/stdc++.h>
using namespace std;
int A[105][105];
int main()
{
    int n, a = 0, b = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a += A[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        b += A[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        c += A[i][2];
    }

    //cout << "\n"<< a << " " << b << " " << c << endl;
    if (a == 0 && b == 0 && c == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}