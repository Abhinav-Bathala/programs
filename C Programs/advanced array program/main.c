#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 int i;
 int left;
 int right;

 for(i = 0; i < MAX; i++){
    printf("Enter a number:   ");
    scanf("%d",&arr[i]);
 }
    int mid =  ((MAX - 1) /2) ;
    printf("%d\n", arr[mid]);
    right = mid + 1;
    for(left = mid - 1 ; left >= 0; left = left - 1){
        printf("%d %d\n",arr[left], arr[right]);
        right = right + 1;

    }








    return 0;
}
