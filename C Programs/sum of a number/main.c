#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,a,sum;
printf("Enter a number");
scanf("%d",&num);
sum = 0;


while(num > 0)
{
    a = num % 10;

    sum = sum + a;
    num = num / 10;


}
printf("Sum = %d\n",sum);
    return 0;
}
