#include<stdio.h>

void main(){
	int number = 100, result;
	int *p = &number;
	result = *p;
	result = result + 50;
	
	printf("������ ���� number �� : %d, number�� �ּ� : %p\n", number, &number);
	printf("������ ���� result �� : %d, result�� �ּ� : %p\n", result, &result);
	printf("--------------------------------------------------------------------\n");
	
	printf("������ ���� p �� : %p\n ������ ����  p�� �ּ� : %p\n������ ����  p�� ����Ű�� �ּ�  (%p)�� ����� �� : %d\n", p, &p, &number, *p);
	
	
	printf("--------------------------------------------------------------------\n");
	
	
}
