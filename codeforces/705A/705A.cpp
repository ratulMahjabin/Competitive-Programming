#include <bits/stdc++.h>
using namespace std;
void hate()
{
    cout << "I hate that ";
}

void love()
{
    cout << "I love that ";
}

int main()
{
    int N, i = 1;

    cin >> N;
    
    while (i <= N)
    {
        if (i % 2 != 0)
        {
            if ((N - i) == 0)
                cout << "I hate it";
            else
            {
                hate();
            }
        }

        else if (i % 2 == 0)
        {
            if ((N - i) == 0)
                cout << "I love it";
            else
            {
                love();
            }
        }

        i++;
    }

return 0;
}