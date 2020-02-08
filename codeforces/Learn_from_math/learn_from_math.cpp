#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("8 %d\n",n-8);
    }
    else
        printf("9 %d\n",n-9);
    return 0;
}