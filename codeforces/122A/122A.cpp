#include <bits/stdc++.h>
using namespace std;

int lucky(int n)
{
    int flag = 0;
    while (n > 0)
    {
        int p = n % 10;
        n /= 10;
        if (p != 4 or p != 7)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return 2;
    else
        return 1;
}
int main()
{
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 774, 747, 777, 477};
    int num;
    cin >> num;
    if (lucky(num) != 2)
    {
        cout << "YES";
        return 0;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (num % arr[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}