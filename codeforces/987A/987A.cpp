#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<string, string> gems = {{"purple", "Power"}, {"green", "Time"}, {"blue", "Space"}, {"orange", "Soul"}, {"red", "Reality"}, {"yellow", "Mind"}};
    map<string, string>::iterator clr;
    cin >> n;
    string color[n];
    for (int i = 0; i < n; i++)
    {
        cin >> color[i];
        gems.erase(color[i]);
    }
    cout << (6 - n) << endl;
    for (clr = gems.begin(); clr != gems.end(); ++clr)
    {
        cout << clr->second << "\n";
    }
    return 0;
}