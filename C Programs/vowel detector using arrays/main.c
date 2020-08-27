#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main()
{
   char arr[NUM];
   int i;

   for(i = 0; i < NUM; i++){
        printf("Enter a character:  ");
        scanf("%s", &arr[i]);

   }
    printf("The vowels that you typed are:  ");
    for(i = 0; i < NUM; i++){
        if ((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'u')){
        printf("\n %c", arr[i]);

    }

    return 0;
}
}
