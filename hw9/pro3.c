#include<stdio.h>

int main()
{
	int a[10][2];
	int i,j,tmp;
	int N = 10;

	for (i = 0; i < N; i++)
	{
		printf("%d번 학생: ", i);
		scanf("%d", &a[i][0]);
		a[i][1] = i;	
	}

	for (i = 1; i <= N-1; i++)
		for (j = N-1; j >= i; j--)
			if (a[j-1][0] < a[j][0])
			{
				// 성적 교환
				tmp = a[j-1][0];
				a[j-1][0] = a[j][0];
				a[j][0] = tmp;

				//학번 교환
				tmp = a[j-1][1];
				a[j-1][1] = a[j][1];
				a[j][1] = tmp;
			}
	
	printf("--결과--\n");
	printf("성적 순: ");
	for (i = 0; i < N-1; i++)
		printf("%d(%d번), ", a[i][0], a[i][1]);
	printf("%d(%d번)\n", a[N-1][0], a[N-1][1]);

	return 0;
}
