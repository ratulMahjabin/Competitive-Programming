#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, t, j;
    char s[50];
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 0; i < n - 1;)
        {
            j = i + 1;
            if (s[i] == 'B' && s[j] == 'G')
            {
                s[i] = 'G';
                s[j] = 'B';
                i = j + 1;
            }
            else
            {
                i++;
            }
        }
    }

    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }

    
    return 0;
}