#include<stdio.h>


int main(void)
{
	int a, b;

	printf("----------------------------------------------------------\n");

	printf("��Ģ������ ���� �� ���� �Է�: ");
	scanf("%d %d", &a, &b);

	printf("----------------------------------------------------------\n");

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, div(a, b));

	printf("----------------------------------------------------------\n");

	return 0;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int sub(int x, int y)
{
	int z;
	z = x - y;
	return z;
}

int mul(int x, int y)
{
	int z;
	z = x * y;
	return z;
}

int div(int x, int y)
{
	int z;
	z = x / y;
	return z;
}
