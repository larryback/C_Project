#include<stdio.h>
void main(){
	int i, sum = 0;
	int number[5];
	
	for(i = 0;i<5;i++){
		printf("%d ��° ���ڸ� �Է��ϼ���: ", i+1);
		scanf("%d", &number[i]);
		sum  = sum + number[i];
	}
	printf("------------------------------------------------\n");
	printf("�Է��� ������ �հ�: %d\n", sum);
	printf("�Է��� ������ ���: %d\n", sum/5);
}
