#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,a,b,c,d;
    printf("Enter a number limit");
    scanf("%d",&limit);
    a = 0;
    b = 1;
    c = 0;
    d = 2;

     if(limit > 0)
      {
       c = a + b;
       printf("%d\n",a);
       printf("%d\n",b);




        while(c <= limit)
    {

        printf("%d\n",c);
        a = b;
        b = c;
        c = a + b;
        d = d + 1;


    }
   }
    else
    {
        d = 0;


    }




    printf("There are %d\n",d);
    return 0;
}
