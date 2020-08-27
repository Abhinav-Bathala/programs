#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main()
{
    char arr[MAX];
    int is_palindrome = 1;
    int i;
    int f;

    printf ("Enter a word with less than %d characters ", MAX);
    scanf("%s", arr);
    i = strlen(arr);

    i = 5;
    #if 0
    for(i = 0; i < MAX; i++){
        printf("Enter a characters:   ");
        scanf("%c", &arr[i]);
        fflush(stdin);
    }
    #endif

    i--;
    for(f = 0; f < i; f++){
       if ((arr[f] != arr[i])) {
          is_palindrome = 0;
          break;
       }
       i = i - 1;
    }

    if (is_palindrome == 1)
        printf("The word you typed %s is a palindrome word", arr);
    else
        printf("The word you typed %s is not a palindrome word", arr);

    return 0;
}

