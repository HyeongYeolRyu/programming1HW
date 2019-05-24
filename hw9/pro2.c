#include<stdio.h>

int main()
{
	int i,j, tmp, a[10];

	for (i = 0; i<10; i++)
	{
		printf("%d번 학생: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= 9; i++)
		for (j = 9; j >= i; j--)
			if (a[j-1] < a[j])
			{
				tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
	
	printf("--결과--\n");
	printf("성적순: ");
	for (i = 0; i < 9; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[9]);

	return 0;
}
