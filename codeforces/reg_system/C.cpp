#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
map<string, int>::iterator it ;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        it = mp.find(s);
        if(it == mp.end())
        {
            mp[s]=1;
            cout<<"OK"<<endl;
        }

        else
        {
            cout<<<<mp[s]<<endl;
            mp[s]++;

        }
    }

    return 0;
}
