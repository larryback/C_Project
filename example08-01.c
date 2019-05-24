#include<stdio.h>
#include<stdlib.h>
int main(void){
	FILE*fp=fopen("result.txt", "w");
	char str[50];
	printf("파일에 저장할 문자열을 입력한 후 엔터를 누르세요\n\n");
	scanf("%[^\n]", str);
	fprintf(fp, "%s", str);
	printf("문자열 저장 완료~!\n");
	return 0;
}
