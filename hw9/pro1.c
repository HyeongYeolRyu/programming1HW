#include<stdio.h>

int main()
{
	int student[10];
	int rank[10];
	int i,j;

	for (i = 0; i < 10; i++)
	{
		printf("%d번 학생: ", i);
		scanf("%d", &student[i]);
		rank[i] = 1;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (student[i] < student[j])
				rank[i]++;
		}
	}
	printf("\n--결과--\n");
	for (i = 0 ; i < 10; i++)
		printf("%d번 학생: %d점 - %d등\n", i, student[i], rank[i]);

	return 0;
}
