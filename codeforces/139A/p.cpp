#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int pages[7];
    cin >> n;

    for (int i = 1; i <= 7; i++)
    {
        cin >> pages[i];
    }

    int k = 1;
    while (1)
    {
        n -= pages[k];
        if (n > 0)
            k++;
        else
            break;
        if (k > 7)
            k = k % 7;

        //cout << n << " ";
    }

    cout << k << endl;
}