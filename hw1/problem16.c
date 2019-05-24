/*
 * 작성자 : 유형열
 * 학번 : 20152306
 * */

#include<stdio.h>

int main(void)
{
	float num1, num2, sum;

	printf("두 개의 실수를 입력하세요 : ");
	scanf("%f %f", &num1, &num2);
	sum = num1 + num2;
	printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
	return 0;
}
