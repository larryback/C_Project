#include <stdio.h>
void main()
{
	char ch1;
	printf("���ĺ��� �Է��ϼ���: ");
	ch1 = getchar();
	printf("����=%c", ch1);
	putchar(ch1+3);
	putchar('\a');
	printf("\n");
}
