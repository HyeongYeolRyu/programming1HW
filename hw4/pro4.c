#define MIN(x,y,z) \
	x < y   ?   ( x < z ? x : z )   :   ( y < z ? y : z )

#define MAX(x,y,z,w) \
	x > y   ?   ( x > z ? (x > w ? x : w )   :   (z < w ? w : z) )   :   \
			 	( y > z ? (y > w ? y : w )   :   (z < w ? w : z) )

#include<stdio.h>

int main()
{
	printf("%d\n", MIN(1,2,3));
	printf("%d\n", MIN(1,3,2));
	printf("%d\n", MIN(2,1,3));
	printf("%d\n", MIN(2,3,1));
	printf("%d\n", MIN(3,2,1));
	printf("%d\n", MIN(3,1,2));
	
	printf("%d\n", MAX(1,2,3,4));
	printf("%d\n", MAX(1,2,4,3));
	printf("%d\n", MAX(1,4,3,2));
	printf("%d\n", MAX(1,3,2,4));
	printf("%d\n", MAX(1,2,3,4));
	printf("%d\n", MAX(2,1,3,4));
	printf("%d\n", MAX(2,1,4,3));
	printf("%d\n", MAX(2,3,1,4));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(3,1,4,2));
	printf("%d\n", MAX(3,4,1,2));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(4,3,2,1));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(2,3,4,1));
	printf("%d\n", MAX(2,3,4,1));

	return 0;
}
