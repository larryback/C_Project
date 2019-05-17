#include<stdio.h>
int main()
{
	int x = 10;
	int a, b;
	
	a = x <<2;
	b = x >>2;
	
	printf("x<<2 = %d(16진값=%08X)\n", a, a);
	printf("x>>2 = %d(16진값=%08X)\n", b, b);
	
	return 0;
	
	
}
