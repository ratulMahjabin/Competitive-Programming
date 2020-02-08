#include <iostream>
#include <ctype.h>

using namespace std;
int main()
{
    int up = 0, low = 0;
    string S;
    fflush(stdin);
    cin>>S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]<='Z')
            up++;
        else if(S[i]>='a')
        {
            low++;
        }
    }

    if (up > low)
    {
        for (int i = 0; i < S.size(); i++)
        {
            S[i]=toupper(S[i]);
        }
    }
    else if (low >= up)
    {
        for (int i = 0; i < S.size(); i++)
        {
            S[i] = tolower(S[i]);
        }
    }
    cout << S;
    return 0;
}