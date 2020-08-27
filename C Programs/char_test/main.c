#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'a';
    int i = 200;
    int j;

    a = 'a';
    printf ("%c", a);
    a = 'b';
    printf(" %c", a);
    printf("Enter integer + integer\t");
    scanf("%di+j%d", &i, &j);
    printf("You entered %d and %d, sum is %d\n", i, j, i+j);
    return 0;
}
