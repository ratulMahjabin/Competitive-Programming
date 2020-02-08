#include <bits/stdc++.h>
using namespace std;
vector <int>v;
int main()
{
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[n+1];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    int alice = a[1];
    for(int i=1; i<=n; i++)
    {
        if(i==1 or alice >= 2*a[i])
        {
            v.push_back(i);
            sum2+=a[i];
        }
    }

    if(sum2*2 > sum1)
    {
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }

    else
        cout<<0;

    return 0;
}
