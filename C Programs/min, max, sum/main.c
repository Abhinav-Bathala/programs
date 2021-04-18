#include <stdio.h>
#include <stdlib.h>

int main()
{

 int count, num, min, max, Limit, sum, Average;
 printf("Enter the amount of numbers you want to enter");
 scanf("%d", &count);
Limit = count;
sum = 0;



 while (count > 0)
 {
     printf("Enter a number ");
     scanf("%d", &num);
     sum = num + sum;
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
 Average = sum/Limit;


     printf("Minimum number = %d\n",min);
     printf("Maximum number = %d\n",max);
     printf("Sum = %d\n",sum);
     printf("Average = %d\n",Average);

    return 0;

}


