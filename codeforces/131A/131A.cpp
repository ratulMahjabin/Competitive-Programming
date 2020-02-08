#include <bits/stdc++.h>

using namespace std;
int main()
{

    string s;
    cin >> s;

    if (s[0] >= 97 && s[0] <= 122)
    {
        int c = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                c++;
        }
        //cout << c << endl;
        if (c == (s.length() - 1))
        {
            cout << char(toupper(s[0]));
            for (int i = 1; i < s.length(); i++)
            {
                cout << char(tolower(s[i]));
            }
        }

        else
        {
            cout << s;
        }
    }

    /*if (c == s.length())
    {
        cout << char(toupper(s[0]));
        for (int i = 1; i < s.length(); i++)
        {
            cout << char(tolower(s[i]));
        }
    }*/
    /*else
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout << char(tolower(s[i]));
        }
    }*/
    else if (s[0] >= 65 && s[0] <= 90)
    {
        int c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                c++;
        }

        if (c == (s.length()))
        {
            //cout << char(toupper(s[0]));
            for (int i = 0; i < s.length(); i++)
            {
                cout << char(tolower(s[i]));
            }
        }
        else
        {
            cout << s;
        }
    }

    return 0;
}