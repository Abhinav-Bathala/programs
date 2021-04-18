#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,a,counter;
printf("Enter a number");
scanf("%d",&num);

counter = 0;


while(num > 0)
{
    a = num % 10;

    num = num / 10;
    counter = counter + 1;


}
printf("There are %d",counter, "digits in your number");

    return 0;
}
