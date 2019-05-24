#include<stdio.h>
#include<time.h>

void main( )
{
	int i, x, k, lim, n = 5000, prime;
	clock_t start, end;
	x=1;
	
	start = clock();
	for (i=2; i<=n; i++)
	{
		do 
		{
			x=x+2;
			k=1; lim=x/2;
			do 
			{
				k=k+1;
				prime=x%k; 
			} while (prime && k<lim);
		}while (!prime);
		
		printf("%d ", x);
	}
	end = clock();
	
	printf("\nn = %d\n", n);
	printf("걸린 총 clock 수 : %d\n", (int)(end-start));

}
