#include<stdio.h>
#include<string.h>
#define NIL 0

struct s {char name[10]; int count,left,right;};
struct s node[100];
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
		strcpy(node[size].name, str);
		node[size].count = 1;
		node[size].left = node[size].right = NIL;
		*link = size;
	}
	else if (strcmp(str, node[*link].name) < 0) // 좌측
		search(str, &node[*link].left);
	else if (strcmp(str,node[*link].name) > 0) // 우측
		search(str, &node[*link].right);
	else // 같으면
		node[*link].count++;
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
		printf("%s (%d)\n",node[i].name, node[i].count);
		print_tree(node[i].left, n+1);
		print_tree(node[i].right, n+1);
	}
}
