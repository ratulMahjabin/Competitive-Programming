#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    int n, a, cnt_4 = 0, cnt_3 = 0, cnt_2 = 0, cnt_1 = 0, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back(a);
    }

    //sort(A.begin(), A.end(), greater<int>());
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 4)
            cnt_4++;
        else if (A[i] == 3)
            cnt_3++;
        else if (A[i] == 2)
            cnt_2++;
        else if (A[i] == 1)
            cnt_1++;
    }
    total += cnt_4;
    //cout << cnt_1 << " " << cnt_2 << " " << cnt_3 << " " << cnt_4 << endl;

    if (cnt_2 >= 2)
    {
        if (cnt_2 % 2 == 0)
        {
            total += cnt_2 / 2;
            cnt_2 -= cnt_2;
        }
        else if (cnt_2 % 2 == 1)
        {
            total += (cnt_2 / 2);
            cnt_2 %= 2;
        }
        /* else
            {
                total += cnt_2;
                cnt_2 -= cnt_2;
            }*/
    }
    if (cnt_3 > 0 and cnt_1 > 0)
    {
        if (cnt_3 > cnt_1)
        {
            total += cnt_1;
            cnt_3 = cnt_3 - cnt_1;
            cnt_1 -= cnt_1;
        }

        else
        {
            total += cnt_3;
            cnt_1 = cnt_1 - cnt_3;
            cnt_3 -= cnt_3;
        }
    }

    if (cnt_1 > 0)
    {
        if (cnt_1 % 4 == 0)
        {
            total += (cnt_1 / 4);
            cnt_1 -= cnt_1;
        }
        else
        {
            total += (cnt_1 / 4);
            cnt_1 %= 4;
        }
    }
    if (cnt_1 + cnt_3 >= 2)
    {
        if (cnt_1 > cnt_3)
        {
            total += cnt_3;
            cnt_1 -= cnt_3;
        }
        else
        {
            total += cnt_1;
            cnt_3 -= cnt_1;
        }
    }
    if (cnt_1 + cnt_2 >= 2)
    {
        if (cnt_1 > cnt_2)
        {
            total += cnt_2;
            cnt_1 -= cnt_2;
        }
        else
        {
            total += cnt_1;
            cnt_2 -= cnt_1;
        }
    }


        //cout << total << " " << cnt_1 << " " << cnt_2 << " " << cnt_3 << endl;

        //total += cnt_1 + cnt_2 + cnt_3 + cnt_4;
        //cout << "total->" << total;
    cout << total;
    return 0;
}