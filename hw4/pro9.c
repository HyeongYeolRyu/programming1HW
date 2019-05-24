#include<stdio.h>

int main()
{
	int year, day, month,lastmon, cnt = 0, n, i;
	int limit = 31;

	printf("년도를 입력 하세요 : ");
	scanf("%d", &year);
	printf("월을 입력 하세요 : ");
	scanf("%d", &month);

	day = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;

	//해당 월의 day 계산하기
	for (i = 1; i < month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			limit = 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			limit = 30;
		else if (i == 2)  //윤년 체크
			if ( (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0) )
				limit = 29;
			else
				limit = 28;
		lastmon = limit;
		day = (day + lastmon) % 7;
	}

	//해당 월의 최대 날 수 구하기
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			limit = 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			limit = 30;
		else if (month == 2)  //윤년 체크
			if ( (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0) )
				limit = 29;
			else
				limit = 28;

	//달력 출력
	printf("\n     %d년 %d월\n", year, month);
	printf(" Su Mo Tu We Th Fr Sa\n");
	for (n = 1 - day; n <= limit; n++)
	{
		if (n <= 0) printf("   ");
		if (n > 0) printf("%3d", n);
		cnt++;
		if (cnt % 7 == 0) printf("\n");
	}
	printf("\n");

	return 0;
}
