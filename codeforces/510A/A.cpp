#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        if(i & 1)
        {
            for(int i=1; i<=m; i++)
            {
                cout<<"#";
            }

            cout<<endl;
        }

        else if(i % 2==0 and flag==0)
        {
            flag =1;
            for(int i=1; i<=m-1; i++) cout<<".";

            cout<<"#"<<endl;

        }

        else
        {
            flag=0;
            cout<<"#";
            for(int i=1; i<=m-1; i++)cout<<".";

            cout<<endl;
        }
    }

    return 0;
}
