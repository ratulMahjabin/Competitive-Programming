#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,a1[5];
    int p,q,r,s,t,i,j,tmp;
    cin>>a>>b>>c;

    p=(a*b*c);
    q=(a+b)*c;
    r=a+(b*c);
    s=a*(b+c);
    t=(a+b+c);

    a1[0]=p;
    a1[1]=q;
    a1[2]=r;
    a1[3]=s;
    a1[4]=t;

    for (i = 0; i < 5; i++)
    {
       for (j = 0; j < 5 - i - 1; j++)
        {
            if (a1[j] > a1[j + 1])
             {
               tmp = a1[j];
               a1[j] = a1[j + 1];
               a1[j + 1] = tmp;
             }
        }

    }

    cout<<a1[4];
    return 0;
}