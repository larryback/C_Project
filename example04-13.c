#include <stdio.h>

// 1 ~ 10 ������ ���� ���ϴ� �ڵ��Դϴ�.

int main() {
  int number = 1;
  int sum = 0; // ��
  
  do {
  	printf("%d\n", number);
    sum += number;
    number++;
  }while(number <= 10);
    
  printf("\n 1~10 ������ �� : %d", sum);

  return 0;
}

