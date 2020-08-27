#include <stdio.h>
#include <stdlib.h>

int main()
{
  int count, num, evenmin, evenmax, oddmin, oddmax, Check1;
  int firsteven = 0; /* state variable */
  int oddcount = 0;
  printf("Enter the amount of numbers you want to enter");
  scanf("%d", &count);

  while (count > 0)
  {
    printf("Enter a number ");
    scanf("%d", &num);
    Check1 = num % 2;
    if (Check1 == 1)
    {
        /* User entered odd number */
        if (oddcount == 0)
        {
           oddmin = num;
           oddmax = num;
        }
        else {
          if (oddmin >= num)
          {
              oddmin = num;
          }
          else if (oddmax <= num)
          {
              oddmax = num;
          }
        }

        oddcount = oddcount + 1;
    }
    else
    {
        if (firsteven == 0)
        {
           evenmax = num;
           evenmin = num;
           firsteven = 2;
        }

        else {
            if (evenmin >= num)
            {
                evenmin = num;
            }
            else if (evenmax <= num)
            {
               evenmax = num;
            }
        }
    }
    count = count - 1;
 }

    if (firsteven != 0) {
        printf("Even Min = %d\n", evenmin);
        printf("Even Max = %d\n", evenmax);
    }

    if (oddcount > 0) {
        printf("Odd Min = %d\n", oddmin);
        printf("Odd Max = %d\n", oddmax);
    }

    return 0;
}


