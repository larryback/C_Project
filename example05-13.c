#include<stdio.h>
int main()
{
	register int result;
	int x = 10, y = 20;
	result = x + y;
	printf("register ���� result �� = %d\n", result);
	return 0;
}
