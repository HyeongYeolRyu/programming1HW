#include<stdio.h>

int main()
{
	int year, day,out,month,n,array[42];
	int limit[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("원하는 년도를 입력하세요 :");
	scanf("%d", &year);

	day = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;

	//윤년 체크
	if ( (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0) )
		limit[1]++;


	printf("\n");
	for (month=1; month<=12; month++)
	{
		printf("     %d년 %d월\n", year, month);
		printf(" SU MO TU WE TH FR SA\n");
		for (n=1 ;n<=42; n++)
		{
			out=n-day;
			array[n-1]=out; // 배열에 저장
		} 
		
		for (n=1; n<=42; n++)
		{
			out=array[n-1];// 배열로부터 출력
			if (out>0 && out<=limit[month-1])
				printf("%3d",out);
			else
				printf("   ");
			if (n % 7 == 0) printf("\n");
		}
		
		day= (day + limit[month-1]) % 7;
	}

	return 0;
}
