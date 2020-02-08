#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, c0=0,c1=0,k0=0,k1=0,ans;
    cin>>n>>m;
     vector<int> a(n), b(m);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]% 2==0)
            c0++;
        else
            c1++;
    }


    for(int i=0; i<m; i++)
    {
        if(b[i]% 2==0)
            k0++;
        else
            k1++;
    }

    //cout<<c0<<" "<<c1<<endl;
    //cout<<k0<<" "<<k1;

    ans = min(c0, k1) + min(c1, k0);

    cout<<ans;

}
