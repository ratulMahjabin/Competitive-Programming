#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,sum=0,ans=0, out=0;
    cin>>T;
    int arr[T];
    for(int i=0; i<T; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+T);
    for(int j=0; j<T; j++)
    {
        sum+= arr[j];
    }

    sum= sum/2;
    while(ans<=sum)
    {
        out++;
        ans+= arr[T-out];
    }

    cout<<out;

    return 0;
}