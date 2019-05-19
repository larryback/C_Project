#include<stdio.h>
void main()
{
	int a, b, max;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &a,&b); 
	if(a>=b)
		max= a;
			
	else
		max=b;
				
	printf("더 큰수 max 의 값은: %d\n", max);
	
}
