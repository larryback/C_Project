#include<stdio.h>

void test(){
	extern int result;
	
	int x = 100, y = 20;
	result = x + y;
	printf("test result = %d\n", result);
}
