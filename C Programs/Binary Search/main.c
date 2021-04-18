#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int i;
   printf("Enter the amount of numbers you want to type:   ");
   scanf("%d", &num);
   int arr[num];
   for(i = 0; i < num; i++)
   {
       printf("Enter a number:  ");
       scanf("%d", &arr[i]);
   }
   int j;
   int k;
   int t;
   for(j = 1; j < num; j++)
   {
       /*
          pick first number from unsorted block
          k is the index where the the t should be inserted
        */

       t = arr[j];

       for (k = j - 1; k >= 0; k--)
       {
           if(arr[k] > t)
           {
               arr[k + 1] = arr[k];
           }
           else {
               break;
           }
       }
       arr[k + 1] = t;
   }

   int target;
   int Left = 0;
   int Right = num - 1;
   int Middle = num / 2;
   num = Middle;
   int Check = 0;
   printf("Enter the number you want to search in the array:  ");
   scanf("%d", &target);
    while (Left <= Right)
   {


       if(target > arr[Middle])
       {
          Left = Middle + 1;
          Middle = Left +(Right - Left) / 2;

       }
       else if(target < arr[Middle])
       {
          Right = Middle - 1;
          Middle = Right - (Right - Left) / 2;
       }
       else if(target == arr[Middle])
       {
          printf("The number %d has been found inside the array", target);
          Check = 1;
          break;
       }
   }
   if(Check != 1)
   {
      printf("The number %d has not been found inside the array", target);
   }


   return 0;
}
