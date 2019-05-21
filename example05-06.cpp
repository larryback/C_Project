#include<stdio.h>
void swap(int *, int *);

int main()
{
	int a = 10;
	int b = 20;
	
	printf("before calling func swap\n");
	printf("a addr  :%x, b addr   : %x\n", &a, &b);
	printf("a value :%8d, b value :%8d\n\n", a, b);
	
	swap(&a, &b);
	
	printf("after calling func swap\n");
	printf("a addr  :%x, b addr   : %x\n", &a, &b);
	printf("a value :%8d, b value :%8d\n\n", a, b);
	
	return 0;
	
}

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("calling func swap\n");
	printf("a addr  :%x, b addr   : %x\n", &a, &b);
	printf("a value :%8d, b value :%8d\n", a, b);
	printf("a pointer : %8d, b pointer : %8d \n\n", *a, *b);
	
}
