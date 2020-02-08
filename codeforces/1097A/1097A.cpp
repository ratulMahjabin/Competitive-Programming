#include <iostream>
#include <string>

using namespace std;
int main()
{
    string tab, deck;
    int t = 5, flag = 0;
    cin >> tab;
    while (t--)
    {
        cin >> deck;

        if (tab[0] == deck[0] || tab[1] == deck[1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}