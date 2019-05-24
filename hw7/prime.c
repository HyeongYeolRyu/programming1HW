#include<stdio.h>

int is_prime(int n);

int main()
{
	int i,x, prime;
	int n = 100; //n개의 소수 출력

	printf("=소수 %d개 출력 결과=\n", n);
	x = 1;
	for (i = 1; i <= n; i++)
	{
		do
		{
			x = x + 1;
			prime = is_prime(x);
		} while (!prime);

		printf("%d ", x);
		if (i % 10 == 0)
			printf("\n");
	}


	return 0;
}

int is_prime(int n)
{
	int res = 1; // 1이면 소수이고 0이면 소수가 아님
	for (int i = 2; i <= n-1; i++)
	{
		if (n % i == 0) //나누어 떨어지면 소수가 아님
			res = 0;
	}
	return res;
}
