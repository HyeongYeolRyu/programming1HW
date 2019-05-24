#include<stdio.h>

int strcmp1(char *s, char *t)
{
	int i;
	for (i = 0; s[i] == t[i]; i++)
		if (s[i] == '\0')
			return 0;
	return s[i]-t[i];
}

void strcpy1(char *s, char *t)
{
	while (*s++=*t++)
		;
}

int main()
{
	int i, n = 2;
	char str[10];
	char tab[100][10] = {"lee", "yoo"};

	while (1)
	{
		printf("enter: ");
		scanf("%s", str);
		for (i = 0; i < n; i++)
			if (strcmp1( str, tab[i] ) == 0) // 입력된 string과 기존에 있던 값 비교
				break;
		if (i == n)
		{
			strcpy1( tab[i], str );
			n++;

			printf("Name : %s has been successfully added.\n", str);

			printf("\n======== Current Name List ==========\n");
			for (i = 0; i < n; i++)
				printf("%d : %s\n", i, tab[i]);
		}
		else
			printf("already exists at %d\n", i);
	}

	return 0;
}
