#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,x3,y3,x4,y4,x,y;

    cin>>x1>>y1>>x2>>y2;
    x = abs(x2 - x1);
    y = abs(y2 - y1);

    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {
        cout<<-1;
    }

    else if (x1 == x2)
        cout << x1 + y << " " << y1 << " " << x2 + y << " " << y2 << endl;
    else if (y1 == y2)
        cout << x1 << " " << y1 + x << " " << x2 << " " << y2 + x << endl;
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;

    return 0;

}
