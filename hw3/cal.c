#define TRUE 1
#define FALSE 0

#include<stdio.h>

int main()
{
	int day, year, lastYear, leapSwitch, month, n, cnt = 0;
	int limit = 31;

	printf("년도를 입력하세요. : ");
	scanf("%d", &year);
	
	//윤년 체크
	if ( ((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0) ) 
		leapSwitch = TRUE;
	else
		leapSwitch = FALSE;

	lastYear = year - 1; // 지난해
	day = (lastYear + (lastYear/4) - (lastYear/100) + (lastYear/400) + 1) % 7;	

	printf("\n");
	for (month = 1; month <= 2; month++)
	{
		printf("     %d년 %d월\n", year, month);
		printf(" SU MO TU WE TH FR SA\n");
		for (n = 1-day; n <= limit; n++)
		{
			if (n <= 0) // n이 0 보다 작을 경우, 공백 출력
				printf("   ");
			if (n > 0)
				printf("%3d", n);
			cnt++;
			
			// 매 출력을 7번 할 때마다 개행해 줌
			if (cnt % 7 == 0)
				printf("\n");

		}
		printf("\n\n");

		day = (day + 31) % 7; // 다음 달의 시작 요일로 바꿔줌

		// 윤년일 경우, 그 달의 일수를 29일로 바꿔줌
		if (leapSwitch)
			limit = 29;
		else
			limit = 28;

		cnt = 0; // cnt값 다시 0으로 초기화
	}

	return 0;
}
