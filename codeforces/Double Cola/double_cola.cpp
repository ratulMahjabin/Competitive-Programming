#include <bits/stdc++.h>
using namespace std;
vector <string> d;
int main()
{
    d.push_back("Sheldon");
    d.push_back("Leonard");
    d.push_back("Penny");
    d.push_back("Rajesh");
    d.push_back("Howard");

    for(int i=0; i<; i++)
    {
        string name = d[i];
        d.push_back(name);
        d.push_back(name);
    }

    int n;
    cin>>n;
    cout<<d[n-1];
    return 0;
}
