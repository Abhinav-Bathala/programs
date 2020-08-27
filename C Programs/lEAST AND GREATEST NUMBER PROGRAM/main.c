#include <stdio.h>
#include <stdlib.h>

int main()
{
 int count, num, min, max, Limit;
 printf("Enter the amount of numbers you want to enter");
 scanf("%d", &count);
Limit = count;


 while (count > 0)
 {
     printf("Enter a number ");
     scanf("%d", &num);
     if (count == Limit)
     {
         min = num;
         max = num;
     }



     if (min >= num)
     {
         min = num;
     }
     else if (max <= num)
     {
         max = num;

     }

      count = count - 1;
 }


     printf("Minimum number = %d\n",min);
     printf("Maximum number = %d\n",max);

    return 0;

}
