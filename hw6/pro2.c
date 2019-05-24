#include<stdio.h>

int arr[10]={4,6,3,16,8,9,1,0,-10,-2};

int main( ) 
{
	int max, p=0;
	
	max = arr[p];
	
	for (int i=1; i<=9; i++) {
		// 최대값 검사(arr[i]와 max 비교), max값 변경, max위치 저장
		if (max < arr[i])
		{
			max = arr[i];
			p = i;
		}
	}
	
	printf("최댓값 : %d, 위치 : %d\n", max, p);
	
	return 0;
}
