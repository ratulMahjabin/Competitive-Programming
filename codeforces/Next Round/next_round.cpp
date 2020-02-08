#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,K,a,cnt=0,cmp,sum=0,avg;

    cin>>N>>K;
    vector<int>V;

    for(int i=0; i<N; i++)
    {
        cin>>a;
        V.push_back(a);
    }
  
    //sort(V.begin(), V.end(), greater<int>());

    for(int j=0; j<V.size(); j++)
    {
        if(V[j]>=V[K-1]&&V[j]) cnt++;
    }

    cout<<cnt;

    return 0;
}