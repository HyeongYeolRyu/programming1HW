#include<stdio.h>

int main()
{
	int i = 1, j = 1;

loop1:
	if (i > 9)
		goto end;
	j = 1;

loop2:
	if (j > 9)
	{
		i += 3;
		goto loop1;
	}

  printf("%d x %d = %d\t", i, j, i*j);
  printf("%d x %d = %d\t", i+1, j, (i+1)*j);
  printf("%d x %d = %d\t", i+2, j, (i+2)*j);
  printf("\n");

  j++;
	
  goto loop2;

end:
	return 0;
}
