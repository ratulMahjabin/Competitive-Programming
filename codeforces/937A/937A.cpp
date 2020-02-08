#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int score[600];

    cin >> n;
    for (int i = 0; i <= 600; i++)
        score[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > 0)
            score[a] = 1;
    }

    int cnt = 0;
    for (int i = 1; i <= 600; i++)
    {
        if (score[i] == 1)
            cnt++;
    }

    cout << cnt << endl;
}