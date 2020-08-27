#include <stdio.h>
#include <stdlib.h>

int main()
{
int tablelimit;
int tablenumber;
int a;
int b;

printf("Enter a table number between 1 & 16");
scanf("%d", &tablenumber);
printf("Enter a table limit between 1 & 100");
scanf("%d",&tablelimit);
if ((tablenumber > 1) && (tablenumber < 16) || (tablelimit > 1) && (tablelimit < 100))
{
    b = tablenumber;
    for ( a = tablenumber * tablenumber; a <= tablelimit; a = (tablenumber * tablenumber) + a)
    {
        printf("%d x %d = %d\n", tablenumber,b,a);
        b = b + tablenumber;
    }
}
else
{
    printf("You did not follow the restrictions");
}
    return 0;
}
