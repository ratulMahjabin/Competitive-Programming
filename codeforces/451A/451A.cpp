#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, indx, akshat, malvika; // 1 means win, 0 means loses

    cin >> row >> col;

    int a[row * col + 1], i, j, del = 0, k, p, steps = 1;

    for (i = 1; i <= row * col; i++)
    {
        a[i] = i;
    }

        for (p = 1; p <= row * col; p++)
    {
        for (i = 1; i <= row * col; i++)
        {
            indx = i;
            if (a[indx] != -1)
            {
                //a[indx] = -1;
                del = indx;
                for (j = 1; j <= row; j++)
                {

                    a[del] = -1;
                    del += col;
                } // col deletion

                for (k = 1; k <= col; k++)
                {
                    a[indx++] = -1;
                }

                if (steps % 2 == 1)
                {
                    akshat = 1;
                    malvika = 0;
                }
                else
                {
                    akshat = 0;
                    malvika = 1;
                }

                steps++;
            }
        }
    }

    if (akshat == 1 and malvika == 0)
    {
        cout << "Akshat";
    }

    else
    {
        cout << "Malvika";
    }
}
