#include<stdio.h>

void main(){
	int num[4] = {10, 20, 30, 40};
	int value[] = {50, 60, 70, 80};
	int *p[2], i;
	
	p[0] = num;
	p[1] = value;
		
	for(i = 0; i < 4; i++)
		printf("*(p[0]+%d ) = %d\n", i, *(p[0] + i));
	printf("\n");
	
	for(i = 0; i < 4; i++)
		printf("*(p[1]+%d ) = %d\n", i, *(p[1] + i));
	printf("\n");
	
	printf("p[0] + 5 = %d\n *p[1] + 7 = %d", *p[0] + 5, *p[1] + 7);
	printf("\n");
	
}
