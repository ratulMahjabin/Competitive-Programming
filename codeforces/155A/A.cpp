#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag,sum1=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    for(int i=1; i<n; i++)
    {
        int x = a[i];
        for(int j=i-1; j>=0; j--)
        {
            if(x < a[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
            sum1+=1;
        flag=0;
    }

    for(int i=1; i<n; i++)
    {
        int x = a[i];
        for(int j=i-1; j>=0; j--)
        {
            if(x > a[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
            sum1+=1;
        flag=0;
    }

    cout<<sum1;


}
