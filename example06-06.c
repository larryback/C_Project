#include<stdio.h>

void main(){
	int number = 100, result;
	int *p = &number;
	result = *p;
	result = result + 50;
	
	printf("정수형 변수 number 값 : %d, number의 주소 : %p\n", number, &number);
	printf("정수형 변수 result 값 : %d, result의 주소 : %p\n", result, &result);
	printf("--------------------------------------------------------------------\n");
	
	printf("포인터 변수 p 값 : %p\n 포인터 변수  p의 주소 : %p\n포인터 변수  p가 가르키는 주소  (%p)에 저장된 값 : %d\n", p, &p, &number, *p);
	
	
	printf("--------------------------------------------------------------------\n");
	
	
}
