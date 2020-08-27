#include <stdio.h>
#include <stdlib.h>
#define  MAX_NUM 9
int main()
{
    int i;
    int arr[MAX_NUM];
    for(i = 0; i <=  MAX_NUM; i++){
        printf("Enter a number:  ");
        scanf("%d", &arr[i]);

    }
     for(i = 0; i <= MAX_NUM; i++ ){
        printf("%d\n", arr[i]);
    }
    return 0;
}
