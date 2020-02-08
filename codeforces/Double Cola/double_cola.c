#include <bits/stdc++.h>
using namespace std;
deque <string> d("Sheldon", "Leonard", "Penny", "Rajesh");
int main()
{
    int n;
    string name;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        name=d.front();
        d.pop_front();
        d.push_back(name);
        d.push_back(name);
    }

    cout<<d.at(n);
    return 0;

}
