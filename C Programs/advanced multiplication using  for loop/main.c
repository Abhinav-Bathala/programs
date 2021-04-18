#include <stdio.h>
#include <stdlib.h>



int main()
{

int tablelimit;
int tablenumber;
int a;
int b;
int d;

printf("Enter a table number between 1 & 100 ");
scanf("%d", &tablenumber);
printf("Enter a table limit between 1 & 10000 ");
scanf("%d",&tablelimit);
if ((tablenumber > 1) && (tablenumber < 100) || (tablelimit > 1) && (tablelimit < 10000 ))


    for (  b = tablelimit / tablenumber, d = 0; b > 0 && d < tablenumber; b = b - tablenumber + d, d = d + 1 )
    {
        a = tablenumber * b;
        printf("%d x %d = %d\n", tablenumber,b,a);

    }

else
{
    printf("You did not follow the restrictions");
}
    return 0;
}

