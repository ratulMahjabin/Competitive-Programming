#include <bits/stdc++.h>
int remover(int x)
{
    int power = 1, sum = 0;
    int Q;
    while (x > 0)
    {
        Q = x % 10;
        x = x / 10;
        if (Q != 0)
        {
            sum += power * Q;
            power*= 10;
        }
    }
    return sum;
}
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b;

    c = a + b;
    int x = remover(a);
    int y = remover(b);
    int z = remover(c);

    if((x+y) == z)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}