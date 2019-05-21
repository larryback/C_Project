#include<stdio.h>
int add(int x);
int total;

int main(void)
{
	printf("첫번째 add(10) 수행\n");
	add(10);
	printf("total = %d\n, total");
	
	printf("두번째 add(10) 수행\n");
	add(10);
	printf("total = %d\n, total");
	
	return 0;
}

int add(int x)
{
	int i, sum=0;
	for(i=1;i<=x;i++)
	{
		sum = sum + i;
		total = total + i;
	}
	printf("sum = %d\n", sum);
}
