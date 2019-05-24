#include<stdio.h>
#include<time.h>

void main( )
{
	int x, i,k,lim, prime, p[10000], n = 5000;
	int d1=0, d2=0, d3=0;
	clock_t start, end;

	lim = 1;
	x=1;
	p[1]=2;
	
	start = clock();
	for (i=2; i<=n; i++) 
	{
		do 
		{
			x=x+2; d1++; // 명령어 횟수 계산
			k=2;
			if (p[lim]*p[lim] <= x)
			{
				lim++; d2++; // 명령어 횟수 계산
			}

			prime=1;
			while (prime && k<lim) 
			{
				prime = (x%p[k] != 0); d3++; // 명령어 횟수 계산
				k=k+1;
			}
		} while (!prime);
		p[i]=x; printf("%d ",x);
	}
	end = clock();
	
	printf("\nn = %d\n", n);
	printf("걸린 총 clock 수 : %d\n", (int)(end-start));

}
