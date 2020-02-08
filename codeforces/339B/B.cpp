#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,m;
    long long int cnt=0;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    cnt+= abs(1-a[0]);
    for(int j=0; j<m-1; j++)
    {
        if(a[j] <= a[j+1]) cnt+= (a[j+1] -a[j]);
        else cnt+= n- (a[j]-a[j+1]);
    }


    cout<<cnt;
}
