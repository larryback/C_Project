#include <stdio.h>

int main(void)
{
 int i;
 int sum = 0; 
 

 printf("1부터 100까지의 합은 ");
 for (i=1;i<=100;i++)
 {
  sum = sum + i; 
 }
 printf("%d\n", sum);
 
 return 0;
} 
