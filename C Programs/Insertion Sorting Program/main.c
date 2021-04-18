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


   printf("Sorted number are\n");
   for(i = 0; i < num; i++)
   {
       printf("%d\n", arr[i]);
   }
   return 0;
}
