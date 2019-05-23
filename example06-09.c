#include<stdio.h>

void main(){
	int *p, num[] = {10, 20, 30, 40};
	p = &num[3];
	printf("%d\n", *p);
	p = p - 1;
	printf("%d\n", *p +7);
	printf("%d\n", *(p+1));
	printf("%d\n", *p-5);
}
