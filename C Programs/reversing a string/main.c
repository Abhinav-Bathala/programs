#include <stdio.h>
#include <stdlib.h>
#define MAX 255
int main()
{
    char arr[MAX];
    int num;
    int num2;
    printf("Enter a string:  ");
    scanf("%s", arr);
    num = strlen(arr);
    num--;
    char arr2[num];
    for(num2 = 0; arr2[num2] = arr[num]; num--)
    {
        printf("%c", arr2[num2]);
        num2++;


    }
    return 0;
}
