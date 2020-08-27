#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2, b = 3, c = 4, number;
    printf("Enter a number between 0 and 5");
    scanf("%d",&number);

    if (number == 2)
    {
        for (a = 2; a < 5; a = a + 2)
        {
            printf("%d",a);
        }
    }
    else if (number == 3)
    {
        while (b <= 9)
        {
            printf("%d", b);
            b = b + 3;
        }
    }
    else if (number == 4)
    {
        while ( c <= 16)
        {
            printf("%d",c);
            c = c + 4;
        }

    }
    else
    {
        printf("ERROR");
    }

    return 0;

}
