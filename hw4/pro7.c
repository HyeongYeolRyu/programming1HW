#include<stdio.h>

int main()
{
	int num1, num2;
	int i;

	printf("정수 2개를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		for ( ; num1 <= num2; num1++)
		{
			for(i = num1; i > 0; i--)
				printf("*");
			printf("\n");
		}
	else
		for ( ; num1 >= num2; num1--)
		{
			for(i = num1; i > 0; i--)
				printf("*");
			printf("\n");
		}

	return 0;
}
