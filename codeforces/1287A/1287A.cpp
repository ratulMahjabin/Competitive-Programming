#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n, mx = -1, cnt = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            // cout << "i = " << i << endl;
            if (s[i] == 'A')
            {
                for (int j = i + 1; j < n; j++)
                {
                    //cout << "j = " << j << endl;
                    while (s[j] == 'P')
                    {
                        cnt++;
                        j++;
                        //cout << "cnt = " << cnt << endl;
                    }
                    mx = max(mx, cnt);
                    //cout << "mx = " << mx << endl;
                    cnt = 0;
                }
            }
        }
        cout << mx << endl;
    }
}