#include<stdio.h>

int arr[10]={4,6,3,16,8,9,1,0,-10,-2};

int main( ) 
{
	int value,p,i;
	
	printf("찾고 싶은 값을 입력하세요 : ");
	scanf("%d", &value);
	for (i=0; i<=9;i++) 
	{
		if (arr[i] == value)
		{
			p = i;
			break;
		}
	}
	if (i>=10)
		printf("같은 값을 찾지 못함.\n");
	else
		printf("같은 값을 찾음. 위치 : %d\n", p);

	return 0;
}

