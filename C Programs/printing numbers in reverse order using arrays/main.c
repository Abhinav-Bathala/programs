#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 10

int main()
{
    int i;
    int arr[10];
    for(i = 0; i  <  MAX_NUM ; i++){
        printf("Enter a number:  ");
        scanf("%d", &arr[i]);

    }
    for(i = 9 ; i >= 0; i = i - 1 ){
        printf("%d\n", arr[i]);
    }
    return 0;
}

