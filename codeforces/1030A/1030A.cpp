#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 1;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "EASY";
    else
        cout << "HARD";

    return 0;
}