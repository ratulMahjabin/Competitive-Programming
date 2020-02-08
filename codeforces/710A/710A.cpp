#include <bits/stdc++.h>

using namespace std;

int main()
{

    char pos1;
    int pos2;
    cin >> pos1 >> pos2;

    if ((pos1 >= 'b' && pos1 <= 'g') && (pos2 == 1 || pos2 == 8))
    {
        cout << 5;
    }

    else if ((pos1 == 'a' || pos1 == 'h') && (pos2 == 1 || pos2 == 8))
    {
        cout << 3;
    }

    else if ((pos1 == 'a' || pos1 == 'h') && (pos2 >= 2 && pos2 <= 7))
    {
        cout << 5;
    }

    else
    {
        cout << 8;
    }

    return 0;
}