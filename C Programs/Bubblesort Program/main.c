#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int j;
    int t;
    printf("Enter the amount of numbers you want to type:  ");
    scanf("%d", &num);
    int num2 = num;
    int arr[num];
    for(i = 0; i < num; i++)
    {
        printf("Enter a number:  ");
        scanf("%d", &arr[i]);
    }
    for(j = 1; j < num; num--)
    {
        for(i = 0; i < (num - 1); i++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
            j++;

        }
        j = 1;
    }
    for(i = 0; i < num2; i++)
    {
        printf("%d\n", arr[i]);
    }


    return 0;
}
