#include<stdio.h>
void main(){
	int i, sum = 0;
	int number[5];
	
	for(i = 0;i<5;i++){
		printf("%d 번째 숫자를 입력하세요: ", i+1);
		scanf("%d", &number[i]);
		sum  = sum + number[i];
	}
	printf("------------------------------------------------\n");
	printf("입력한 숫자의 합계: %d\n", sum);
	printf("입력한 숫자의 평균: %d\n", sum/5);
}
