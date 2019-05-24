#include<string.h>
#include<stdio.h>

int main(void){
	FILE*fp;
	char msg[] = "EBS Education";
	char buf[20];
	
	if ((fp = fopen("source.txt", "w+"))==NULL){
		fprintf(stderr, "Cannot open output file.\n");
		return 1;
	}
	fwrite(msg, strlen(msg)+1, 1, fp);
	fseek(fp, SEEK_SET, 0);
	fread(buf, strlen(msg)+1, 1, fp);
	printf("%s\n", buf);
	
	fclose(fp);
	return 0;
}
