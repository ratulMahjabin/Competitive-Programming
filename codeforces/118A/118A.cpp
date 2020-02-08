#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'y' || str[i] == 'Y')
        {
            str[i] = ',';
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ',')
        {
            cout << "." << char(tolower(str[i]));
        }
    }
    //cout << str << endl;
    return 0;
}