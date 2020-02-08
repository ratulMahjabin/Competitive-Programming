#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t,next,flag;
    cin>>n>>t;

    int a[n],b[n];
    for(int i=1; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i=1;;)
    {
        next = a[i]+i;
        i= next;

        if(i == t)
        {
            flag=1;
            break;
        }
        if(i > t)
        {
            flag =0;
            break;
        }
    }

    if(flag)
        cout<<"YES";
    if(!flag)
        cout<<"NO";

    return 0;
}
