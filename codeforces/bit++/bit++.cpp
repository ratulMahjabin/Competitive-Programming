#include <stdio.h>

int main()
{
	int T, x=0;
	char str[20];
	scanf("%d ", &T);
	//T= T+1;
	while(T>0)
	{
		scanf("%[^\n]%*c", str);

		if(str[1] == '+')
			x++;
		else if(str[1]== '-')
			x--;
		T--;
	}

	printf("%d", x);

	return 0;
}