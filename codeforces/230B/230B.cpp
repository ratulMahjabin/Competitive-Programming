#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num)
{
    bool flag=true;
    if(num ==1 )
        flag = false;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        double n;
        cin>>n;
        long long root = sqrt(n);
        long long ans = root*root;
        //cout<<root<<" "<<ans<<endl;
        if(is_prime(root) == true and ans == n)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
