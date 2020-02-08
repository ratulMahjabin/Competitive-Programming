#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;

    int bg = max(r,b);
    int mn = min(r,b);

    int ans = (bg-mn)/2;

    cout<<mn<<" "<<ans;
    return 0;
}
