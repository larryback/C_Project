#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*fps, *fpr;
	char str, rtr[30];
	
	fps = fopen("source.txt", "w");
	
	for (str = 'a';str<='z';str=str + 1)
		fputc(str, fps);
	printf("a~z���� �����Է� �Ϸ�~!!!\n\n");
	fclose(fps);
	
	printf("���Ϸ� ���� ���� ����: ");
	fpr = fopen("source.txt", "r");
	fscanf(fpr,"%s", rtr);
	printf("%s\n\n, rtr");
	fclose(fpr);
}
