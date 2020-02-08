#include <bits/stdc++.h>
using namespace std;

int main()
{
	char arr[100];
	int length , i,j;
	scanf("%s", arr);
	length = strlen(arr);

	for(i=0; i<(length-1) ;i+=2)
	{
		for(j=0; j<(length-i-1); j+=2){
            if(arr[j]>arr[j+2]){
                swap(arr[j],arr[j+2]);
            }
		}
	}

	printf("%s", arr);
	return 0;
}