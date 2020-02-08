#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,h=0;
    cin>>a>>b;
    int ans = a;
    for(int i=1; i<=ans; i++)
    {
        h++;
        if(i%b==0) ans++;
    }

    cout<<h;
}
