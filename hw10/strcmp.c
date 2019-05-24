#include<stdio.h>

int strcmp1(char *s, char *t)
{
	int i;
	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i]-t[i];
}

int strcmp2(char *s, char *t)
{
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s-*t;
}

int main()
{
	char a[10] = "abc";
	char b[10] = "abcd";
	char c[10] = "abc";
	
	printf("a배열의 값: %s\n", a);
	printf("b배열의 값: %s\n", b);
	printf("c배열의 값: %s\n", c);

	printf("a배열과 b배열이 같으면 0, 다르면 0이외의 값: %d\n", strcmp1(a,b));
	printf("a배열과 c배열이 같으면 0, 다르면 0이외의 값: %d\n", strcmp2(a,c));
	
	return 0;
}
