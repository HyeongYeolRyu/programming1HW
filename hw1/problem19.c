/*
 * 작성자 : 유형열
 * 학번 : 20152306
 * */

#include<stdio.h>

int main()
{
	int num1;
	float num2;
	
	printf("정수와 실수를 입력하세요 : ");
	scanf("%d %f", &num1, &num2);
	printf("%d * %.2f = %.2f\n", num1, num2, num1 * num2);
	
	return 0;
}
