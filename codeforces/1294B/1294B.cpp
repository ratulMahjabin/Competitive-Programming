#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        set<pair<int, int>> s;
        int n;
        cin >> n;

        while (n--)
        {
            int x, y;
            cin >> x >> y;

            s.insert({x, y});
        }

        int cx, cy, nx, ny;
        cx = cy = 0;

        string ss = "";

        bool f = 0;
        for (auto itr = s.begin(); itr != s.end(); itr++)
        {
            nx = itr->first;
            ny = itr->second;

            int dx = nx - cx;
            int dy = ny - cy;

            if (dx < 0 or dy < 0)
            {
                f = 1;
                break;
            }

            for (int i = 0; i < dx; i++)
            {
                ss += 'R';
            }

            for (int i = 0; i < dy; i++)
            {
                ss += 'U';
            }

            cx = nx;
            cy = ny;
        }

        if (f)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << ss << endl;
        }
    }
}