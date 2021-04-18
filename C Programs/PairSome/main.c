#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int i;
   int j;
   int sum;
   int check = 0;
   printf("Enter the amount of numbers you want in the sorted array:  ");
   scanf("%d", &num);
   int arr[num];
   for(i = 0; i < num; i++)
   {
       printf("Enter a number: ");
       scanf("%d", &arr[i]);
   }
   printf("Enter a sum of two numbers: ");
   scanf("%d", &sum);
   i = 0;
   int l;
   int k = 1;
   j = 0;
   i = sum - arr[j];

   while(i >= arr[j])
   {
       if(arr[j] != i)
       {
           for(l = 0; l < num; l++)
           {
              if(i == arr[l])
              {
                 i = arr[l];
                 printf("%d , %d\n", arr[j], arr[l] );
                 check++;
              }

           }
       }
       else
        {
            for(l = 0; l < num; l++)
            {
                if((i == arr[l]) && (i == arr[k]))
                {
                   i = arr[l];
                   printf("%d , %d\n", arr[j], i );
                   check = 1;
                }
                k++;
            }
        }
        j++;
        i = sum - arr[j];
   }
   if(check == 0)
   {
       printf("There are no pairs of numbers in the array that add up to %d", sum);
   }

    return 0;
}
