#include <bits/stdc++.h>
using namespace std;
vector<int> boy,girl;
int main()
{
    int n,m,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        boy.push_back(a);
    }
    sort(boy.begin(), boy.end());
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int a;
        cin>>a;
        girl.push_back(a);
    }


    sort(girl.begin(), girl.end());


    for(int i=0; i<boy.size(); i++)
    {
        for(int j=0; j<girl.size(); j++)
        {

            if(abs(boy[i]-girl[j]) <= 1)
            {
                cnt++;
                girl[j]=10000;

                break;
            }
        }
    }


    cout<<cnt<<endl;
}
