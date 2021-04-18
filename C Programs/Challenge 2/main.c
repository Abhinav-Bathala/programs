#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int j;
    printf("Enter the amount of numbers you would like:  ");
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++)
    {
        printf("Enter your number:  ");
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < num; i++)
    {
        for(j = i; j < num ; j++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
