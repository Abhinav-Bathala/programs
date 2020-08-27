#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int Remainder;
    printf("Enter a number  ");
    scanf("%d",&a);
    printf("Enter another number  ");
    scanf("%d",&b);
    Remainder = a % b;
    if (Remainder == 0)
    {
        printf("Your two numbers does not have a remainder");
    }
    else
    {
        printf("The remainder of your two numbers is %d",Remainder);
    }

    return 0;
}
