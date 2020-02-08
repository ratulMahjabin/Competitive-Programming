#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    int ans = min(row, col);

    if (ans % 2)
    {
        cout << "Akshat";
    }

    else
    {
        cout << "Malvika";
    }

    return 0;
}