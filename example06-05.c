#include<stdio.h>
void main(){
	int a = 10, b;
	int *p;
	p = &a;
	b = *p;
	b = b + 20;
	
	printf("변수 a의 값: %d : %p\n", a);
	printf("변수 b의 값: %d : %p\n", b);
	printf("변수 p의 값: %d : %p\n\n", p);
	
}
