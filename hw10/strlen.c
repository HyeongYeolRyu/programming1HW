#include<stdio.h>

int strlen1(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return i;
}

int strlen2(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int strlen3(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return (p-s);
}

int strlen4(char *s)
{
	char *p = s;
	while (*p)
		p++;
	return (p-s);
}

int main()
{
	char *c[4] = {"abc", "abcd", "abcde", "abcdef"};

	printf("=각 문자열의 길이=\n");
	for (int i = 0; i < 4; i++)
		printf("%s ", c[i]);
	printf("\n%d %d %d %d\n", strlen1(c[0]), strlen2(c[1]), strlen3(c[2]), strlen4(c[3]) );

	return 0;
}
