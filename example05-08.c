#include<stdio.h>
int main(void)
{
	int a=10;
	{
		int a = 20;
		int b;
		
		b = a + 10;
		printf("a=%d\n", a);
		printf("b=%d\n", b);
		
	}
	printf("a=%d\n", a);
	return 0;
}
