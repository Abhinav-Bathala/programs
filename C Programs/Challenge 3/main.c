#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int j;
    int k;
    printf("Enter the amount of numbers you would like:  ");
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++)
    {
        printf("Enter a number:  ");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
    i = 0;
    j = num - 1;
    while(j >= i)
    {
        k = arr[i];
        arr[i] = arr[j];
        arr[j] = k;
        i++;
        j--;
    }
    printf("\n");
    for(i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
