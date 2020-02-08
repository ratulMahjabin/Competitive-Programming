#include <bits/stdc++.h>
using namespace std;
vector <int>v;
int main()
{
    int n,a,b,c,value=-1,x,y,z;
    cin>>n>>a>>b>>c;

    for(int ax=0; ax<=n; ax+=a)
    {
        for(int by=0; by<= n-ax; by+=b)
        {
            z = (n-(ax+by))/c;
            x = ax/a;
            y = by/b;
            if(a*x+b*y+c*z == n)
                value = max(value, x+y+z);
        }
    }



    cout<<value;


}
