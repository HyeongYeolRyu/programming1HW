#include<stdio.h>
#include<time.h>

int is_prime(int n)
{
	for (int i = 2; i<n;i++)
		if (n % i == 0)
			return 0;
	return 1;
}

void main( ) 
{
	int i, x, prime, n = 5000;
	clock_t start_clock, end_clock;
	x=1;
	
	start_clock = clock(); // 시간 측정 시작
	for (i=1; i<=n; i++) {
		do {
			x=x+1;
			prime=is_prime(x); }
		while (!prime);
		printf("%d ", x);
	}
	end_clock = clock(); // 시간 측정 시작 끝

	printf("\nn = %d\n", n);
	printf("걸린 총 clock 수 : %d\n", (int)(end_clock-start_clock));
}
