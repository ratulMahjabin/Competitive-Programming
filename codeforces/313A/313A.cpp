#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a,b,c,d,ans;
    cin>>n;

    l = abs(n);

    //cout<<l<<endl;

    if(n > 0)
    {
        cout<<n;
        return 0;
    }


    a = l / 10;
    b = l % 10;
    c = ((l/10)/10)*10+b;

    ans = a > c? c: a;
    cout<<ans*-1;


    return 0;
}
