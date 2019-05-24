#include<stdio.h>

int arr[10]={44,55,12,42,94,6,18,67};
int n = 8; // 배열 내 정수 개수
int step = 0;

void printArr()
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");	
}

void qsort(int l, int r) 
{
	int i = l, j = r, x;

	x = arr[(l+r)/2]; // x = pivot
	printf("quicksort(l=%d,x=%d,r=%d)\n", l,x,r);
	do 
	{
		while (arr[i] < x) i++;
		while (x < arr[j]) j--;
		
		if (i <= j) 
		{
			int w;

			//exchange
			w = arr[i];
			arr[i] = arr[j];
			arr[j] = w;
			if (i != j) // 같은 경우는 중복 출력되므로
				printArr();			
			i++; j--; 
		}
	} while (i <= j);

	if (l < j) qsort(l,j); // left qsort
	if (i < r) qsort(i,r); // right qsort
}

int main()
{
	printf("=정렬하기 전=\n");
	printArr();
	printf("\n");
	qsort(0, n-1); // Do quicksort
	
	printf("\n=정렬 후=\n");
	printArr();

	return 0;
}
