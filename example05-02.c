#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20], s2[10], result[20];
	
	strcpy(s1, "EBS");
	printf("s1= %s\n", s1);
	
	strcpy(s2, "Education");
	printf("s2= %s\n", s2);
	
	
	strcat(s1,s2);
	
	printf("strcat(s1,s2)=%s\n", s1);
	
	strcpy(result,s1);
	printf("result=%s\n", result); 
}
