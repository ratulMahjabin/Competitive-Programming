#include <bits/stdc++.h>
using namespace std;
int dp[4005],n,x;
int main()
{
    fill(dp+1, dp+4005, -40000);
    cin>>n;

    for(int i=0; i<3; i++)
    {
        cin>>x;
        for(int j=x; j<=n; j++)
        {
            dp[j] = max(dp[j], dp[j-x]+1);
        }
    }

    cout<<dp[n];
    //cout<<dp[0];
    return 0;
}
