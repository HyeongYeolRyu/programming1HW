#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NIL 0

struct s {char name[10]; int count; struct s *left; struct s *right;};
int size = 0;

void search(char *, struct s **);
void print_tree(struct s *, int); 
	
int main() 
{
	struct s *root = NIL;
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

void search(char *str, struct s **link) 
{
	struct s *p;
	p = malloc(sizeof(struct s));
	
	if (*link == NIL) 
	{
		strcpy(p->name, str);
		p->count = 1;
		p->left = p->right = NIL;
		*link = p;
		size++; // 전체 개수 증가
	}
	else if (strcmp(str, (*link)->name) < 0) // 좌측
		search(str, &((*link)->left));
	else if (strcmp(str, (*link)->name) > 0) // 우측
		search(str, &((*link)->right));
	else // 같으면
		(*link)->count++;
}

void print_tree(struct s *i, int n)
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
		printf("%s (%d)\n",i->name, i->count);
		print_tree(i->left, n+1);
		print_tree(i->right, n+1);
	}
}
