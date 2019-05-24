#include<stdio.h>

int main()
{
	int i = 1, j = 1;

	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{

			printf("%d x %d = %d\t", i, j, i*j);
			printf("%d x %d = %d\t", i+1, j, (i+1)*j);
		    printf("%d x %d = %d\t", i+2, j, (i+2)*j);
		    printf("\n");

			j++;
		}
		
		i += 3;
	}

	return 0;
}
