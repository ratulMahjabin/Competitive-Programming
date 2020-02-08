#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, temp;
        int liv = 0, bed = 0, kit = 0;
        char s[51];
        scanf("%d", &n);

        while (n--)
        {
            scanf("%s", s);

            if (s[0] == 'k')
                kit++;
            else if (s[0] == 'l')
                liv++;
            else
                bed++;
        }

        bed /= 2;

        if (bed <= liv && bed <= kit)
            temp = bed;
        else
        {
            liv = min(liv, kit);
            temp = min(liv, bed);
        }

        printf("%d\n", temp);
    }

    return 0;
}