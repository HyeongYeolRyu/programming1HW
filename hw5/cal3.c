#include<stdio.h>

int main()
{
	int day,out,month,i,j,k,n,array[12][42];
	int limit[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year;

	printf("원하는 년도를 입력하세요 : ");
	scanf("%d",&year);
	
	day= (year + (year-1)/4 -(year-1)/100 + (year-1)/400)%7;
	
	if ((year%4==0) && (year%100 || year%400==0))
		limit[1]=29;
	
	for (month=0; month<=11; month++){
		for (n=1;n<=42;n++)
			array[month][n-1]=n-day;
		day= (day+limit[month])%7;
	}

	printf("\n\n                                           %d년 달력\n\n", year);
	for (month=0; month<=11; month += 3){

		//월과 요일을 출력하는 부분
		if (month >= 9){
			printf("        %d월                       ", month+1);
			printf("          %d월                       ", month+2);
			printf("           %d월                       ", month+3);
			printf("\n");
			printf(" SU MO TU WE TH FR SA               ");
			printf("  SU MO TU WE TH FR SA               ");
			printf("  SU MO TU WE TH FR SA               ");
			printf("\n");
		}
		else{
			printf("         %d월                       ", month+1);
			printf("           %d월                       ", month+2);
			printf("           %d월                       ", month+3);
			printf("\n");
			printf(" SU MO TU WE TH FR SA               ");
			printf("  SU MO TU WE TH FR SA               ");
			printf("  SU MO TU WE TH FR SA               ");
			printf("\n");
		}
		
		//달력을 출력하는 부분
		for (n = 0; n<=5; n++){
			for (k = month; k<month+3; k++){
				for (j = 0; j <= 6; j++){
					out=array[k][n*7+j];
					if (out>0 && out<=limit[k])
						printf("%3d",out);
					else
						printf("   ");
				}
				printf("                ");
			}
			printf("\n");
		}
	}

	return 0;
}
