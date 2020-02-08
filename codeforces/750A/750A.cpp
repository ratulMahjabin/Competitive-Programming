#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;

    cin>>n>>k;
    int total = 4*60;
    total-=k;

    for(int i=1; i<=n; i++)
    {
        ans+= 5*i;
    }

    if(ans <= total) {cout<<n;return 0;}
    else
    {
        for(int i=n; i>=1;i--)
        {
            ans -=5*i;
            n--;
            if(ans <= total) break;
        }
    }


    //cout<<total<<" "<<ans;
    cout<<n;

}
