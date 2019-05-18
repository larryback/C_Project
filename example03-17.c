#include<stdio.h>
void  main()
{
	int a, b, MAX;
	printf("두개의 정수를 입력하세요: ");
	scanf("%d %d", &a, &b);
	
	MAX=(a>=b)? a:b;
	printf("두 수 중 더 큰값은 =%d\n", MAX); 
}
