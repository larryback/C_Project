#include<stdio.h>
int add(int x);
int total;

int main(void)
{
	printf("ù��° add(10) ����\n");
	add(10);
	printf("total = %d\n, total");
	
	printf("�ι�° add(10) ����\n");
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
