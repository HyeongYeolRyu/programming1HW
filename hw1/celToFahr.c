/*
 * 작성자 : 유형열
 * 학번 : 20152306
 * */

#include<stdio.h>

int main()
{
	double fahr;
	int lower = -50, upper = 50, step = 5;
	int cel, i;
	
	cel = lower;

	for(cel = lower; cel <= upper; cel += step)
	{
		fahr = cel * 1.8 + 32;
		printf("섭씨:%d = 화씨:%.3lf\n", cel, fahr);
	}

	return 0;
}
