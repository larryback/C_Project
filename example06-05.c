#include<stdio.h>
void main(){
	int a = 10, b;
	int *p;
	p = &a;
	b = *p;
	b = b + 20;
	
	printf("���� a�� ��: %d : %p\n", a);
	printf("���� b�� ��: %d : %p\n", b);
	printf("���� p�� ��: %d : %p\n\n", p);
	
}
