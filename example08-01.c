#include<stdio.h>
#include<stdlib.h>
int main(void){
	FILE*fp=fopen("result.txt", "w");
	char str[50];
	printf("���Ͽ� ������ ���ڿ��� �Է��� �� ���͸� ��������\n\n");
	scanf("%[^\n]", str);
	fprintf(fp, "%s", str);
	printf("���ڿ� ���� �Ϸ�~!\n");
	return 0;
}
