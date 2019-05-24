#include<stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i += 3)
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\t", i, j, i*j);
			printf("%d x %d = %d\t", i+1, j, (i+1)*j);
			printf("%d x %d = %d\t", i+2, j, (i+2)*j);
			printf("\n");
		}

	return 0;
}
