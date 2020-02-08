#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a;
            if(a!=0)
            {
                cout<<abs(i-2)+abs(j-2);
                return 0 ;
            }
        }
    }
}