#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int left = min(a, b);
    int right = max(a, b);

    int path = 0;
    int i = 1, j = 1;

    //cout << left << " " << right << endl;

    while (1)
    {

        left++;
        path += i++;
        if (left == right)
            break;
        right--;
        path += j++;
        if (left == right)
            break;
    }

    cout << path << endl;
}