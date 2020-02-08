#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
}p[1005];

bool cmp(point a,point b)
{
    return a.x < b.x;
}

int main()
{
    int s,n, res = 0, flag;
    int x,y;
    cin>>s>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        p[i].x = x;
        p[i].y= y;

    }

    sort(p,p+n,cmp);

    //for(int i=0; i<n; i++)cout<<p[i].x<<" ";

   // cout<<endl;


    for(int i=0; i<n; i++)
    {

        if(s > p[i].x)
        {
            flag = 1;
            s+= p[i].y;
        }

        else
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
