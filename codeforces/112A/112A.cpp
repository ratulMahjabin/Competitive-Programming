#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int cnt = 0;
    char s1[105], s2[105];

    cin >> s1 >> s2;

    //transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    //transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0, j = 0; i < strlen(s1), j < strlen(s2); i++, j++)
    {
        s1[i] = tolower(s1[i]);
        s2[j] = tolower(s2[j]);
    }
    int res = strcmp(s1, s2);

    // if(res ==0) cout<<0;
    //else if(res > 0)

    cout << res << endl;

    return 0;
}