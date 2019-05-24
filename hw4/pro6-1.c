#include<stdio.h>

int main()
{
	int i = 1;
	int j;

	while(i <= 5)
	{
		j = i;
		while(j)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}

	return 0;
}
