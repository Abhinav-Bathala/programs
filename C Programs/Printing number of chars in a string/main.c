#include <stdio.h>
#include <stdlib.h>
#define MAX 255
int main()
{
   int num;
   char arr[MAX];
   printf("Enter a string:  ");
   scanf("%s", arr);
   num = strlen(arr);
   printf("The number of characters in your string is %d",num);

    return 0;
}
