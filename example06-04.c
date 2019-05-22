#include<stdio.h>
void main() {
	int i, j;
	int number[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int value[2][3] = {10, 20};
	
	printf("number \t value \n");
	printf("----------------------------------------------\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		{
			printf("%d \t %d \n", number[i][j], value[i][j]);
		}
	}
	printf("----------------------------------------------\n");
	printf("number의 메모리 : %dbyte\n", sizeof(number));
	printf("value의 메모리 :  %dbyte\n", sizeof(value));
	
	
	printf("----------------------------------------------\n");
}
