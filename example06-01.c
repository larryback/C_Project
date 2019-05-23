#include<stdio.h>
void main(){
	int i;
	char chr[5];
	int number[5]={10, 20};
	
	chr[0] = 'A';
	chr[1] = 'B';
	chr[2] = 'C';
	chr[3] = 'D';
	chr[4] = 'E';
	
	printf("%c %c %c %c %c\n", chr[0], chr[1], chr[2], chr[3], chr[4]);
	
	for(i=0;i<5;i++)
		printf("%d", number[i]);
	    printf("\n\n");	
}
