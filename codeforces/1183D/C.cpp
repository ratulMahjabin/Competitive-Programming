#include <bits/stdc++.h>
using namespace std;
int main()
{
    long k,n,a,b,t;
    long long turns,ans;
    cin>>t;

    while(t--){

    cin>>k>>n>>a>>b;



    if(k > n*a)
    {
        cout<<n<<endl;
        continue;
    }

    long long c = k - n*b;
    double turns = c /((double)(a-b));
    long long p = ceil(turns);
    ans = (turns <= 0)? -1  : p - 1;
    cout<<ans<<endl;

    }

}
