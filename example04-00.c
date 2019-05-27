#include<stdio.h>
main()
{
	int i = 0, sum = 0;
	do {
		i++ ;
		sum = sum + i;
		}
		while (i < 6);
	printf("%d\n", sum);
}
