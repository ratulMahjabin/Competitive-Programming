#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, x, y;
    int cnt=0;
    cin >> s1 >> s2;
    x = s1;
    y = s2;

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!=s2[i])
        {
            cnt++;
        }
    }

    if(cnt == 2 && x==y)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }

    return 0;
    


}