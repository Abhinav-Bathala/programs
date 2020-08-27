#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size;
   int i;
   int num;
   int found = 0;
   printf("Enter the amount of number you want:  ");
   scanf("%d", &size);
   int arr[size];
   printf("Enter the number you want to search for:  ");
   scanf("%d", &num);
   for(i = 0; i < size; i++)
   {
       printf("Enter a number:  ");
       scanf("%d", &arr[i]);
   }
   for(i = 0; i < size; i++)
   {
       if(num == arr[i])
       {
           found = 1;
       }
   }
   if(found == 1)
   {
       printf("The number %d has been found in the set of numbers you entered", num);
   }
   else
   {
       printf("The number %d has not been found in the set of numbers you entered", num);
   }
    return 0;
}
