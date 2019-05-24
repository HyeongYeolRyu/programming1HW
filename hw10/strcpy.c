#include<stdio.h>

void strcpy1(char *s, char *t)
{
	int i = 0;
	while ( (s[i]=t[i]) != '\0')
		i++;
}

void strcpy2(char *s, char *t)
{
	while ( (*s=*t) != '\0' )
	{
		s++;
		t++;
	}
}

void strcpy3(char *s, char *t)
{
	while ( (*s++=*t++) != '\0' )
		;
}

void strcpy4(char *s, char *t)
{
	while (*s++=*t++)
		;
}

int main()
{
	char a[10] = "123";
	char b1[10] = "abc";
	char b2[10] = "abcd";
	char b3[10] = "abcde";
	char b4[10] = "abcdf";
	printf("복사하기 전 a배열의 값: %s\n", a);
	
	strcpy1(a,b1);
	printf("첫 번째 복사 후 a배열의 값: %s\n", a);
	
	strcpy2(a,b2);
	printf("두 번째 복사 후 a배열의 값: %s\n", a);
	
	strcpy3(a,b3);
	printf("세 번째 복사 후 a배열의 값: %s\n", a);
	
	strcpy4(a,b4);
	printf("네 번째 복사 후 a배열의 값: %s\n", a);
	return 0;
}
