#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<int, int>::iterator itr;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;
    while (q--)
    {
        int n, sum = 0, i = 1, prev, x;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }s
        for (itr = mp.begin(); itr != mp.end(); itr++)
        {
            v.push_back(itr->second);
        }

        sort(v.begin(), v.end(), greater<int>());

        //   cout << endl;
        i = 1;
        prev = v[0];
        sum += v[0];
        while (prev > 0 && i < v.size())
        {
            if (v[i] < prev)
            {
                prev = v[i];
                sum += v[i];
            }
            else
            {
                prev--;
                //  cout << prev << " ";
                sum += prev;
            }
            i++;
        }
        cout << sum << endl;
        v.clear();
        mp.clear();
    }
}
