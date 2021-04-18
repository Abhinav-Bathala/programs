#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main()
{
    int arr[NUM],i = 0 , min = 0 ,max = 0;

        while(i < NUM){

        printf("Enter a number:   ");
        scanf("%d", &arr[i]);

        if  (i == 0){
        min = arr[i];
        max = arr[i];

       }
        else{
          if (min > arr[i]){
            min = arr[i];
        }
         else if(arr[i] > max){
            max = arr[i];
        }
        else{
            max = max;
        }

        }

           i = i + 1;

        }





        printf("Minimum number is %d\n", min );
        printf("Maximum number is %d\n", max);





    return 0;
    }
