
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double T, a, b, c, d, r1, r2, i;

    scanf("%lf", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

        r1 = b * log(a);
        r2 = d * log(c);

        if (r1 < r2)
            printf("<\n");
        else
            printf(">\n");
    }

    return 0;
}