#include <bits/stdc++.h>

using namespace std;
int main()
{
    int zero = 0, one = 0, flag = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {

        if ((s[i] == '0' && s[i + 1] == '0') || (s[i] == '0' && s[i - 1] == '0'))
        {
            zero++;

            if (s[i] == '0' && s[i + 1] == '1' && zero < 7)
            {
                zero = 0;
            }
            else if (s[i] == '0' && s[i + 1] == '1' && zero >= 7)
                break;
        }
        else if ((s[i] == '1' && s[i + 1] == '1') || (s[i] == '1' && s[i - 1] == '1'))
        {
            one++;
            if (s[i] == '1' && s[i + 1] == '0' && one < 7)
            {
                one = 0;
            }
            else if (s[i] == '1' && s[i + 1] == '0' && one >= 7)
                break;
        }
    }

    //cout << zero << " " << one << endl;
    if (one >= 7 || zero >= 7)
        printf("YES");
    else
        printf("NO");

    return 0;
}