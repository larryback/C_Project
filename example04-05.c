#include<stdio.h>
void main()
{
	int t1;
	printf("전화번호의 국번을 입력하세요(02,041,051,062 중 선택): ");
	scanf("%d", &t1);
	
	if(t1==02){
		printf("당신의 집은 서울입니다.\n");
	}
	else if(t1==041){
		printf("당신의 집은 대전입니다.\n");
	}
	else if (t1==051){
		printf("당신의 집은 부산입니다.\n");	
	}
    else if (t1==062){
    	printf("당신의 집은 광주입니다.\n");	
	} 
	else{
		printf("번호를 잘못 선택했습니다.\n");	
	} 
	

}
