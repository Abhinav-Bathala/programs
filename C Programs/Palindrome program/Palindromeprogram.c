#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int main()
{
    char arr[MAX];
    int i;
    int f;
    for(i = 0; i < MAX; i++){
        printf("Enter a character:   ");
        scanf("%c", &arr[i]);

    }
    for(f = 0; f < i; f++){

       if(arr[f] == arr[i]){


       }
       else{
            printf("The word you typed is not a palindrome word");
            return 0;
        }
         if(f == i - 1){
            printf("The word you typed is a palindrome word");
        }

         i = i - 1;
        }




    return 0;
}
