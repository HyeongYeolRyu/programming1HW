#include<stdio.h>

int main()
{
	int record[10][5]={ {2011,85,90,88,0},
						{2017,82,87,75,0},
						{1045,79,88,92,0},
						{1234,99,75,81,0},
						{2145,85,92,77,0},
						{2111,100,85,81,0},
						{1982,76,95,87,0} };
	int rank[10];
	int i,j,N=7;
	int rankNum = 1;
	
	for (i = 0; i < N; i++) 
	{
		record[i][4] = (record[i][1] + record[i][2] + record[i][3]) / 3;
		rank[i] = 1;
	}

	// 석차 계산
	for (i = 0; i <= N-1; i++)
	{
		for (j = i+1; j <= N; j++)
		{
				if (record[i][4] > record[j][4])
					rank[j]++;
				else
					rank[i]++;
	
		}
	}

	// 평균과 석차 출력
	for (i = 0; i < N; i++)
	{
		// 평균 출력 
		printf("학번 : %d의 평균 = %d, ", record[i][0], record[i][4]);
		
		// 석차 출력
		printf("석차 = %d\n", rank[i]);
	}
	printf("\n");

	return 0;
}
