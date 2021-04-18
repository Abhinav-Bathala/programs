#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   int num2;
   int i;
   int j = 0;
   int k = 0;
   printf("Enter the amount of numbers you would like in the first array:  ");
   scanf("%d",&num1);
   printf("Enter the amount of numbers you would like in the second array:  ");
   scanf("%d", &num2);
   int arr1[num1];
   int arr2[num2];
   for(i = 0; i < num1; i++)
   {
       printf("Enter a number for first array:  ");
       scanf("%d", &arr1[i]);
   }
      for(i = 0; i < num2; i++)
   {
       printf("Enter a number for second array:  ");
       scanf("%d", &arr2[i]);
   }
   int MainArr[num1 + num2];
    i = 0;
   while(i < num1 + num2)
   {
       if(arr1[j] < arr2[k])
       {
           MainArr[i] = arr1[j];
           j++;
       }
       else if(arr1[j] > arr2[k])
       {
           MainArr[i] = arr2[k];
           k++;
       }
       else
       {
           MainArr[i] = arr1[j];
           MainArr[i + 1] = arr2[k];
           j++;
           k++;
           i++;
       }
       i++;
   }
   printf("Merged array is: \n");
   for(i = 0; i < num1 + num2; i++)
   {
       printf("%d\n", MainArr[i]);
   }


    return 0;
}
