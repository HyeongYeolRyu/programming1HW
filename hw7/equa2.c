#include<stdio.h>


double a[3][4] = { {3,-6,7,3}, {9,0,-5,3}, {5,-8,6,-4} };

void printMat()
{
	for (int i = 0; i < 3; i++)
	{
		printf("[");
		for (int j = 0; j < 4; j++)
		{
			if (j == 3)
			{
				printf("%6.2lf", a[i][j]);
				break;
			}
			else
				printf("%6.2lf\t", a[i][j]);
		}
		printf(" ]");
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int i, j, k; 
	int m = 3, n = 4, cnt = 0;
	double pivot, f;
	
	printf("=바꾸기 전 input 행렬=\n");
	printMat(a);

	/*
	 * 가우스 조던으로 계산하는 부분
	 * */

	for (i = 0 ; i < m; i++)
	{
		pivot = a[i][i];
		for (j = 0; j < n; j++)
			a[i][j] = a[i][j] / pivot;


		pivot = a[i][i];
		for (j = 0; j < m; j++)
		{
			if (i == j)
				continue;

			f = a[j][i]; // 곱하고자 하는 값

			for (k = 0; k < n; k++)
			{
				a[j][k] = pivot * a[j][k] - a[i][k] * f; 
			}
			
			cnt++;
			printf("== step : %d ==\n", cnt);
			printMat();
		}
	}

	printf("=최종 결과=\n");
	printMat(a);
	
	return 0;
}
