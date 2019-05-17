#include<stdio.h>
int main()
{
	int x = 10;
	int y = 20;
	int a, b, c, d;
	
	a = x&y;
	b = x|y;
	c = c^y;
	d = ~x;
	
	printf("x&y = %d(16진수값=%08X)\n", a, a);
	printf("x|y = %d(16진수값=%08X)\n", b, b);
	printf("x^y = %d(16진수값=%08X)\n", c, c);
	printf("~x = %d(16진수값=%08X)\n", d, d);
	
	return 0;
	 
}
