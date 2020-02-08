#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l, maxDist=0;
    cin>>n>>l;

    int lit[n];
    for(int i=0; i<n; i++)
        cin>>lit[i];

    sort(lit, lit+n);
    for(int i=0; i<n-1; i++)
    {
        maxDist = max(maxDist, lit[i+1]-lit[i]);
    }

    //cout<<maxDist<<endl;

    double res = max(lit[0]-0,l-lit[n-1]);

    printf("%.10f", max(maxDist/2., res));
    return 0;
}
