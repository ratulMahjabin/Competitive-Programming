#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> v;
    string str;

    getline(cin, str);
    
    for(int i=0; i< str.size(); i++)
    {
        if(str[i]!=' ')
        {
            v.push_back(str[i]);
        }
    }
    return 0;
}