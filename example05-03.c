#include<stdio.h>
int add(int x, int y);
int main(void)
{
	int a, b, sum;
	a=10, b=20, sum=0;
	printf("두 수의 합을 구하는 프로그램\n");
	sum=add(a,b);
	printf("%d+%d=%d\n", a, b, sum);
	return 0;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
	
}
