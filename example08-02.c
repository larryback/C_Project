#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*fps, *fpr;
	char str, rtr[30];
	
	fps = fopen("source.txt", "w");
	
	for (str = 'a';str<='z';str=str + 1)
		fputc(str, fps);
	printf("a~z까지 내용입력 완료~!!!\n\n");
	fclose(fps);
	
	printf("파일로 부터 읽은 내용: ");
	fpr = fopen("source.txt", "r");
	fscanf(fpr,"%s", rtr);
	printf("%s\n\n, rtr");
	fclose(fpr);
}
