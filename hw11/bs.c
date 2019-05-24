#include<stdio.h>

int n = 9; // 전체 이름 개수
char *name[10] = {"amie", "baus", "callin", "david", "erik", "foi", "gal", "halo", "indal"}; // 알파벳 순서로 정렬되어 있음

int strcmp(char *s, char *t)
{
	for (; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s-*t;
}

int search(int l, int r, char *str)
{
	//printf("l : %d, r : %d, str : %s\n", l, r, str);	

	if (l > r)
		return -1;
	int res;
	int c = (l+r)/2;
	int v;

	if ((v = strcmp(str, name[c])) == 0) // 찾음
		res = c;
	else if (v < 0) // 중간보다 왼쪽에 있을 때
		res = search(l, c-1, str);
	else // 중간보다 오른쪽에 있을 때	
		res = search(c+1, r, str);

	return res;
}

int main()
{
	char str[10];
	int res;
	
	printf("찾으려는 이름을 입력하시오: ");
	scanf("%s", str);
	res = search(0,n-1,str);
	//printf("%d\n", res);
	if (res != -1)
		printf("이름을 찾았습니다. 위치: %d\n", res);
	else
		printf("찾고자 하는 이름이 배열에 없습니다.\n");

	return 0;
}
