#include <stdio.h>
void main()
{
	char ch1;
	printf("알파벳을 입력하세요: ");
	ch1 = getchar();
	printf("문자=%c", ch1);
	putchar(ch1+3);
	putchar('\a');
	printf("\n");
}
