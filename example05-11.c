#include<stdio.h>

void test();
int result;

int main(){
	int x,y;
	x=y=20;
	result = x + y;
	printf("main�� result=%d\n", result);
	test();
	return 0;
}
