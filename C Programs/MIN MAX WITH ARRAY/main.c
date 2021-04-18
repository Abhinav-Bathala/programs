#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main()
{
  int arr[NUM];
  int i;
  float avr;
  int sum = 0;

  for(i = 0; i < NUM; i++){
    printf("Enter a number:  " );
    scanf("%d",&arr[i]);
  }
  for(i = 0; i < NUM; i++){
    sum = sum + arr[i];
  }
  avr = (float)sum/NUM;
  printf("The sum of your numbers are %d\n", sum);
  printf("The average of your numbers are %f\n",avr);

  return 0;
}
