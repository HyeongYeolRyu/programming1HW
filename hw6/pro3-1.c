#include<stdio.h>

int arr[10]={4,6,3,16,8,9,1,0,-10,-2};

int main( ) 
{
	int min, tmp, p, q, i;
	
	printf("=정렬 전=\n");
	for (i = 0; i <= 9; i++) 
		printf("%d  ", arr[i]);
	printf("\n");
	
	for (i = 0; i <= 9; i++) 
	{
		// arr[p]~arr[9] 중에서 최소값의 위치(q)계산
		q = i;
		min = arr[i];

		for (p = i+1; p <= 9; p++)
		{
			if (min > arr[p])
			{
				min = arr[p];
				q = p;
			}
		}
		// arr[i] 와 arr[q] 를 상호 교환
		tmp = arr[i];
		arr[i] = arr[q];
		arr[q] = tmp;
	}
	
	printf("\n=정렬 후(오름차순)=\n");
	for (i = 0; i <= 9; i++) 
		printf("%d  ", arr[i]);
	printf("\n");
	
	return 0;
}
