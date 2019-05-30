#include<stdio.h>
#include<string.h>
#define NIL 0

char name[100][10];
int count[100], left[100], right[100];
int size = 0;

void search(char *, int *);
void print_tree(int, int); 
	
int main() 
{
	int root = NIL;
	char str[10];

	while (1) 
	{
		printf("enter name: ");
		scanf("%s", str);
		if (strcmp(str,".") == 0) 
			break;
		search(str, &root);
	}
	print_tree(root, 0);

	return 0;
}

void search(char *str, int *link) 
{
	if (*link == NIL) 
	{
		size++;
		strcpy(name[size], str);
		count[size] = 1;
		left[size] = right[size] = NIL;
		*link = size;
	}
	else if (strcmp(str,name[*link]) < 0) // 좌측
		search(str, &left[*link]);
	else if (strcmp(str,name[*link]) > 0) // 우측
		search(str, &right[*link]);
	else // 같으면
		count[*link]++;
}

void print_tree(int i, int n)
{
	int j;
	if (size == 0)
	{
		printf("No name exists.\n");
		return;
	}

	for (j = 0; j < n; j++)
		printf(" ");
	if (i == NIL)
		printf("NIL\n");
	else 
	{
		printf("%s (%d)\n",name[i], count[i]);
		print_tree(left[i], n+1);
		print_tree(right[i], n+1);
	}
}
